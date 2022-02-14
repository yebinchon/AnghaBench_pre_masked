
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3fwrn5_fw_cmd_get_bootinfo_rsp {int * hw_version; } ;



__attribute__((used)) static inline bool
FUNC_0(struct s3fwrn5_fw_cmd_get_bootinfo_rsp *VAR_0)
{
 return !!VAR_0->hw_version[2];
}
