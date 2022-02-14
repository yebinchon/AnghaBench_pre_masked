
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_sb_info {int s_last_block; } ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int ) ;
 int VAR_1 ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*,int *,struct kernel_lb_addr*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2,
      struct kernel_lb_addr *VAR_3)
{
 struct udf_sb_info *VAR_4 = FUNC_1(VAR_2);
 sector_t VAR_5 = VAR_4->s_last_block;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, &VAR_5, VAR_3);
 if (VAR_6 != -VAR_0)
  goto out;


 FUNC_2(VAR_2, VAR_1);
 VAR_5 = FUNC_4(VAR_4->s_last_block);

 VAR_6 = FUNC_3(VAR_2, &VAR_5, VAR_3);
 if (VAR_6 != -VAR_0)
  goto out;

 VAR_5 = VAR_4->s_last_block;

 VAR_6 = FUNC_3(VAR_2, &VAR_5, VAR_3);
 if (VAR_6 < 0) {

  FUNC_0(VAR_2, VAR_1);
 }
out:
 if (VAR_6 == 0)
  VAR_4->s_last_block = VAR_5;
 return VAR_6;
}
