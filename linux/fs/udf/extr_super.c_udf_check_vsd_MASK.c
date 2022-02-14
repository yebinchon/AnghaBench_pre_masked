
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct volStructDesc {int dummy; } ;
struct udf_sb_info {int s_session; } ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int loff_t ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct volStructDesc*) ;
 int FUNC_3 (char*,unsigned int,int) ;
 struct buffer_head* FUNC_4 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2)
{
 struct volStructDesc *VAR_3 = ((void*)0);
 loff_t VAR_4 = VAR_0;
 int VAR_5;
 struct buffer_head *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 struct udf_sb_info *VAR_8;

 VAR_8 = FUNC_0(VAR_2);
 if (VAR_2->s_blocksize < sizeof(struct volStructDesc))
  VAR_5 = sizeof(struct volStructDesc);
 else
  VAR_5 = VAR_2->s_blocksize;

 VAR_4 += (((loff_t)VAR_8->s_session) << VAR_2->s_blocksize_bits);

 FUNC_3("Starting at sector %u (%lu byte sectors)\n",
    (unsigned int)(VAR_4 >> VAR_2->s_blocksize_bits),
    VAR_2->s_blocksize);
 for (; !VAR_7 && VAR_4 < VAR_1; VAR_4 += VAR_5) {

  VAR_6 = FUNC_4(VAR_2, VAR_4 >> VAR_2->s_blocksize_bits);
  if (!VAR_6)
   break;

  VAR_3 = (struct volStructDesc *)(VAR_6->b_data +
           (VAR_4 & (VAR_2->s_blocksize - 1)));
  VAR_7 = FUNC_2(VAR_3);

  if (VAR_7) {
   FUNC_1(VAR_6);
   break;
  }





  if (VAR_2->s_blocksize == 4096) {
   VAR_7 = FUNC_2(VAR_3 + 1);

   if (VAR_7 < 0)
    VAR_7 = 0;
  }
  FUNC_1(VAR_6);
 }

 if (VAR_7 > 0)
  return 1;
 else if (!VAR_6 && VAR_4 - (VAR_8->s_session << VAR_2->s_blocksize_bits) ==
   VAR_0)
  return -1;
 else
  return 0;
}
