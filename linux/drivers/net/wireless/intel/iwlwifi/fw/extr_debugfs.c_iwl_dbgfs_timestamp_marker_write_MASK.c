
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_fw_runtime {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct iwl_fw_runtime*,int ) ;
 int FUNC_1 (char*,int,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct iwl_fw_runtime *VAR_0,
      char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_1(VAR_1, 10, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_0(VAR_0, VAR_4);

 return VAR_2;
}
