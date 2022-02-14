
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_sb_private_info {unsigned int s_fmask; unsigned int s_fshift; unsigned int s_fsize; } ;
struct ufs_buffer_head {TYPE_1__** bh; } ;
struct TYPE_2__ {unsigned char* b_data; } ;



__attribute__((used)) static unsigned FUNC_0(struct ufs_sb_private_info *VAR_0,
     struct ufs_buffer_head *VAR_1,
     unsigned VAR_2, unsigned VAR_3,
     unsigned char *VAR_4, unsigned char VAR_5)
{
 unsigned VAR_6, VAR_7;
 unsigned char *VAR_8;


 VAR_7 = VAR_2 & ~VAR_0->s_fmask;
 VAR_2 >>= VAR_0->s_fshift;
 for (;;) {
  if ((VAR_7 + VAR_3) < VAR_0->s_fsize)
   VAR_6 = VAR_3;
  else
   VAR_6 = VAR_0->s_fsize - VAR_7;
  VAR_3 -= VAR_6;
  VAR_8 = VAR_1->bh[VAR_2]->b_data + VAR_7;
  while ((VAR_4[*VAR_8++] & VAR_5) == 0 && --VAR_6)
   ;
  if (VAR_6 || !VAR_3)
   break;
  VAR_2++;
  VAR_7 = 0;
 }
 return (VAR_3 + VAR_6);
}
