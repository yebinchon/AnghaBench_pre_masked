
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_debugfs_reg_lu {char const* name; int off; } ;



__attribute__((used)) static const char *
FUNC_0(int VAR_0, int VAR_1,
        const struct hisi_sas_debugfs_reg_lu *VAR_2)
{
 for (; VAR_2->name; VAR_2++) {
  if (VAR_0 == VAR_2->off - VAR_1)
   return VAR_2->name;
 }

 return ((void*)0);
}
