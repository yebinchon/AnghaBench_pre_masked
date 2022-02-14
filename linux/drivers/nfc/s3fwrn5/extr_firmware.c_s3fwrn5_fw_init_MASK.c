
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fw; } ;
struct s3fwrn5_fw_info {int parity; int completion; int fw_name; TYPE_1__ fw; int * rsp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*) ;

void FUNC_2(struct s3fwrn5_fw_info *VAR_0, const char *VAR_1)
{
 VAR_0->parity = 0x00;
 VAR_0->rsp = ((void*)0);
 VAR_0->fw.fw = ((void*)0);
 FUNC_1(VAR_0->fw_name, VAR_1);
 FUNC_0(&VAR_0->completion);
}
