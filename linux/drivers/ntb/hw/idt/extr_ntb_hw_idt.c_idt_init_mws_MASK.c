
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct idt_ntb_peer {void* mws; int port; int mw_cnt; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct idt_ntb_dev {unsigned char peer_cnt; TYPE_2__ ntb; int lut_lock; struct idt_ntb_peer* peers; void* mws; int port; int mw_cnt; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 void* FUNC_4 (struct idt_ntb_dev*,int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct idt_ntb_dev *VAR_0)
{
 struct idt_ntb_peer *VAR_1;
 unsigned char VAR_2;


 VAR_0->mws = FUNC_4(VAR_0, VAR_0->port, &VAR_0->mw_cnt);
 if (FUNC_0(VAR_0->mws)) {
  FUNC_3(&VAR_0->ntb.pdev->dev,
   "Failed to scan mws of local port %hhu", VAR_0->port);
  return FUNC_1(VAR_0->mws);
 }


 for (VAR_2 = 0; VAR_2 < VAR_0->peer_cnt; VAR_2++) {
  VAR_1 = &VAR_0->peers[VAR_2];
  VAR_1->mws = FUNC_4(VAR_0, VAR_1->port, &VAR_1->mw_cnt);
  if (FUNC_0(VAR_1->mws)) {
   FUNC_3(&VAR_0->ntb.pdev->dev,
    "Failed to scan mws of port %hhu", VAR_1->port);
   return FUNC_1(VAR_1->mws);
  }
 }


 FUNC_5(&VAR_0->lut_lock);

 FUNC_2(&VAR_0->ntb.pdev->dev, "Outbound and inbound MWs initialized");

 return 0;
}
