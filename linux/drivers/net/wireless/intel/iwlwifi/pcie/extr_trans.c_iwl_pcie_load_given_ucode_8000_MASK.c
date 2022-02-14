
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dummy; } ;
struct fw_img {scalar_t__ is_dual_cpus; } ;


 int FUNC_0 (struct iwl_trans*,char*,char*) ;
 int FUNC_1 (struct iwl_trans*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct iwl_trans*) ;
 scalar_t__ FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,struct fw_img const*,int,int*) ;
 int FUNC_5 (struct iwl_trans*,int ) ;
 int FUNC_6 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct iwl_trans *VAR_3,
       const struct fw_img *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 FUNC_0(VAR_3, "working with %s CPU\n",
       VAR_4->is_dual_cpus ? "Dual" : "Single");

 if (FUNC_3(VAR_3))
  FUNC_2(VAR_3);

 FUNC_1(VAR_3, "Original WFPM value = 0x%08X\n",
   FUNC_5(VAR_3, VAR_2));






 FUNC_6(VAR_3, VAR_2, 0x01010101);



 FUNC_6(VAR_3, VAR_0, VAR_1);


 VAR_5 = FUNC_4(VAR_3, VAR_4, 1,
           &VAR_6);
 if (VAR_5)
  return VAR_5;


 return FUNC_4(VAR_3, VAR_4, 2,
            &VAR_6);
}
