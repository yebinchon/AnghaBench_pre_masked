
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *,struct buffer_head*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct buffer_head* FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct buffer_head *FUNC_8(handle_t *VAR_1, struct super_block *VAR_2,
      ext4_fsblk_t VAR_3)
{
 struct buffer_head *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (FUNC_7(!VAR_4))
  return FUNC_1(-VAR_0);
 FUNC_0(VAR_4, "get_write_access");
 if ((VAR_5 = FUNC_3(VAR_1, VAR_4))) {
  FUNC_2(VAR_4);
  VAR_4 = FUNC_1(VAR_5);
 } else {
  FUNC_4(VAR_4->b_data, 0, VAR_2->s_blocksize);
  FUNC_6(VAR_4);
 }

 return VAR_4;
}
