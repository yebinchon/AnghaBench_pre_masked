
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_size; TYPE_1__* i_sb; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode const*) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(const struct inode *VAR_6, loff_t VAR_7)
{
 if (VAR_6->i_size < VAR_7) {
  unsigned long VAR_8;

  VAR_8 = FUNC_1(VAR_2);
  if (VAR_8 != VAR_3 && VAR_7 > VAR_8)
   goto out_sig;
  if (VAR_7 > VAR_6->i_sb->s_maxbytes)
   goto out_big;
 } else {





  if (FUNC_0(VAR_6))
   return -VAR_1;
 }

 return 0;
out_sig:
 FUNC_2(VAR_4, VAR_5, 0);
out_big:
 return -VAR_0;
}
