
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sas_identify_frame {int sas_addr; } ;
struct TYPE_4__ {int* frame_rcvd; scalar_t__ oob_mode; scalar_t__ id; TYPE_1__* ha; } ;
struct pm8001_phy {TYPE_2__ sas_phy; } ;
struct pm8001_hba_info {scalar_t__ sas_addr; } ;
typedef int __be64 ;
struct TYPE_3__ {struct pm8001_hba_info* lldd_ha; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

void FUNC_3(struct pm8001_phy *VAR_2,
 u8 *VAR_3)
{
 if (VAR_2->sas_phy.frame_rcvd[0] == 0x34
  && VAR_2->sas_phy.oob_mode == VAR_1) {
  struct pm8001_hba_info *VAR_4 = VAR_2->sas_phy.ha->lldd_ha;

  u64 VAR_5 = FUNC_0(*(__be64 *)VAR_4->sas_addr);
  VAR_5 += VAR_2->sas_phy.id;
  *(__be64 *)VAR_3 = FUNC_1(VAR_5);
 } else {
  struct sas_identify_frame *VAR_6 =
   (void *) VAR_2->sas_phy.frame_rcvd;
  FUNC_2(VAR_3, VAR_6->sas_addr, VAR_0);
 }
}
