
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct mmp_struct {int mmp_magic; } ;
struct buffer_head {scalar_t__ b_data; int b_end_io; } ;
typedef int ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int VAR_8 ;
 int FUNC_3 (struct super_block*,struct mmp_struct*) ;
 int FUNC_4 (struct super_block*,char*,int,int ) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct buffer_head*) ;
 struct buffer_head* FUNC_8 (struct super_block*,int ) ;
 int FUNC_9 (int ,int,struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_9, struct buffer_head **VAR_10,
     ext4_fsblk_t VAR_11)
{
 struct mmp_struct *VAR_12;
 int VAR_13;

 if (*VAR_10)
  FUNC_2(*VAR_10);




 if (!*VAR_10) {
  *VAR_10 = FUNC_8(VAR_9, VAR_11);
  if (!*VAR_10) {
   VAR_13 = -VAR_3;
   goto warn_exit;
  }
 }

 FUNC_5(*VAR_10);
 FUNC_7(*VAR_10);
 (*VAR_10)->b_end_io = VAR_8;
 FUNC_9(VAR_6, VAR_5 | VAR_7, *VAR_10);
 FUNC_10(*VAR_10);
 if (!FUNC_1(*VAR_10)) {
  VAR_13 = -VAR_2;
  goto warn_exit;
 }
 VAR_12 = (struct mmp_struct *)((*VAR_10)->b_data);
 if (FUNC_6(VAR_12->mmp_magic) != VAR_4) {
  VAR_13 = -VAR_1;
  goto warn_exit;
 }
 if (!FUNC_3(VAR_9, VAR_12)) {
  VAR_13 = -VAR_0;
  goto warn_exit;
 }
 return 0;
warn_exit:
 FUNC_0(*VAR_10);
 *VAR_10 = ((void*)0);
 FUNC_4(VAR_9, "Error %d while reading MMP block %llu",
       VAR_13, VAR_11);
 return VAR_13;
}
