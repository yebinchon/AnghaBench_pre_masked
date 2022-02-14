
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct device {int dummy; } ;
struct be_queue_info {void* head; } ;
struct be_tx_obj {struct be_queue_info q; } ;
struct be_eth_wrb {int frag_len; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct be_queue_info*) ;
 struct be_eth_wrb* FUNC_2 (struct be_queue_info*) ;
 int FUNC_3 (struct device*,struct be_eth_wrb*,int) ;

__attribute__((used)) static void FUNC_4(struct be_adapter *VAR_0,
       struct be_tx_obj *VAR_1, u32 VAR_2, bool VAR_3,
       u32 VAR_4)
{
 struct device *VAR_5;
 struct be_eth_wrb *VAR_6;
 struct be_queue_info *VAR_7 = &VAR_1->q;

 VAR_5 = &VAR_0->pdev->dev;
 VAR_7->head = VAR_2;


 FUNC_1(VAR_7);
 while (VAR_4) {
  VAR_6 = FUNC_2(VAR_7);
  FUNC_3(VAR_5, VAR_6, VAR_3);
  VAR_3 = 0;
  VAR_4 -= FUNC_0(VAR_6->frag_len);
  FUNC_1(VAR_7);
 }

 VAR_7->head = VAR_2;
}
