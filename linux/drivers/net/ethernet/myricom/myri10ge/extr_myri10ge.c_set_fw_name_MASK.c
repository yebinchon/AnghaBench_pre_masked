
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myri10ge_priv {int fw_name_allocated; char* fw_name; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct myri10ge_priv *VAR_0, char *VAR_1, bool VAR_2)
{
 if (VAR_0->fw_name_allocated)
  FUNC_0(VAR_0->fw_name);
 VAR_0->fw_name = VAR_1;
 VAR_0->fw_name_allocated = VAR_2;
}
