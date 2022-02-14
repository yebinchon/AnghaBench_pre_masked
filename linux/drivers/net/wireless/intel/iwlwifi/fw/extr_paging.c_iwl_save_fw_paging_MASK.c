
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_fw_runtime {int dummy; } ;
struct fw_img {int dummy; } ;


 int FUNC_0 (struct iwl_fw_runtime*,struct fw_img const*) ;
 int FUNC_1 (struct iwl_fw_runtime*,struct fw_img const*) ;

__attribute__((used)) static int FUNC_2(struct iwl_fw_runtime *VAR_0,
         const struct fw_img *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}
