
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct pm8001_ioctl_payload {int minor_function; int length; int* func_specific; scalar_t__ offset; } ;
struct pm8001_hba_info {scalar_t__ chip_id; int* sas_addr; TYPE_2__* phy; TYPE_1__* chip; TYPE_3__* pdev; int * nvmd_completion; } ;
struct TYPE_8__ {int (* get_nvmd_req ) (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;} ;
struct TYPE_7__ {scalar_t__ subsystem_vendor; } ;
struct TYPE_6__ {int dev_sas_addr; } ;
struct TYPE_5__ {int n_phy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (int*,int*,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct pm8001_hba_info *VAR_9)
{
 u8 VAR_10, VAR_11;
 u8 VAR_12[8];
 for (VAR_10 = 0; VAR_10 < VAR_9->chip->n_phy; VAR_10++) {
  VAR_9->phy[VAR_10].dev_sas_addr = 0x50010c600047f9d0ULL;
  VAR_9->phy[VAR_10].dev_sas_addr =
   FUNC_2((u64)
    (*(u64 *)&VAR_9->phy[VAR_10].dev_sas_addr));
 }
 FUNC_5(VAR_9->sas_addr, &VAR_9->phy[0].dev_sas_addr,
  VAR_4);

}
