
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct be_mcc_compl {int flags; } ;
struct be_async_event_qnq {int vlan_tag; int valid; } ;
struct be_adapter {TYPE_1__* pdev; int flags; int qnq_vid; } ;
struct TYPE_2__ {int dev; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_3,
         struct be_mcc_compl *VAR_4)
{
 u8 VAR_5 = 0;
 struct be_async_event_qnq *VAR_6 = (struct be_async_event_qnq *)VAR_4;

 VAR_5 = (VAR_4->flags >> VAR_1) &
   VAR_0;

 switch (VAR_5) {
 case 128:
  if (VAR_6->valid)
   VAR_3->qnq_vid = FUNC_1(VAR_6->vlan_tag);
  VAR_3->flags |= VAR_2;
 break;
 default:
  FUNC_0(&VAR_3->pdev->dev, "Unknown debug event 0x%x!\n",
    VAR_5);
 break;
 }
}
