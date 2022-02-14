
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int sli_intf; } ;
struct lpfc_hba {char* ModelName; TYPE_1__* pcidev; TYPE_2__ sli4_hba; } ;
struct firmware {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_9 ;
 int FUNC_1 (struct firmware const*,void*) ;
 int FUNC_2 (struct firmware const**,scalar_t__*,int *) ;
 int FUNC_3 (int ,int ,scalar_t__*,int *,int ,void*,int (*) (struct firmware const*,void*)) ;
 int FUNC_4 (scalar_t__*,int,char*,char*) ;

int
FUNC_5(struct lpfc_hba *VAR_10, uint8_t VAR_11)
{
 uint8_t VAR_12[VAR_1];
 int VAR_13;
 const struct firmware *VAR_14;


 if (FUNC_0(VAR_9, &VAR_10->sli4_hba.sli_intf) <
     VAR_6)
  return -VAR_2;

 FUNC_4(VAR_12, VAR_1, "%s.grp", VAR_10->ModelName);

 if (VAR_11 == VAR_5) {
  VAR_13 = FUNC_3(VAR_8, VAR_3,
     VAR_12, &VAR_10->pcidev->dev,
     VAR_4, (void *)VAR_10,
     FUNC_1);
 } else if (VAR_11 == VAR_7) {
  VAR_13 = FUNC_2(&VAR_14, VAR_12, &VAR_10->pcidev->dev);
  if (!VAR_13)
   FUNC_1(VAR_14, (void *)VAR_10);
 } else {
  VAR_13 = -VAR_0;
 }

 return VAR_13;
}
