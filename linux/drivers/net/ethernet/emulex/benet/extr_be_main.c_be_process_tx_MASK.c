
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int used; } ;
struct TYPE_4__ {int id; } ;
struct be_tx_obj {TYPE_2__ q; TYPE_1__ cq; } ;
struct be_tx_compl_info {int end_index; } ;
struct be_adapter {int netdev; } ;
struct TYPE_6__ {int tx_compl; int sync_compl; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (struct be_tx_obj*) ;
 int FUNC_3 (struct be_adapter*,int ,int,int) ;
 struct be_tx_compl_info* FUNC_4 (struct be_adapter*,struct be_tx_obj*) ;
 scalar_t__ FUNC_5 (struct be_adapter*,struct be_tx_obj*,int ) ;
 int FUNC_6 (int ,int) ;
 TYPE_3__* FUNC_7 (struct be_tx_obj*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct be_adapter *VAR_0, struct be_tx_obj *VAR_1,
     int VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 struct be_tx_compl_info *VAR_5;

 while ((VAR_5 = FUNC_4(VAR_0, VAR_1))) {
  VAR_3 += FUNC_5(VAR_0, VAR_1, VAR_5->end_index);
  VAR_4++;
 }

 if (VAR_4) {
  FUNC_3(VAR_0, VAR_1->cq.id, 1, VAR_4);
  FUNC_1(VAR_3, &VAR_1->q.used);



  if (FUNC_0(VAR_0->netdev, VAR_2) &&
      FUNC_2(VAR_1)) {
   FUNC_6(VAR_0->netdev, VAR_2);
  }

  FUNC_8(&FUNC_7(VAR_1)->sync_compl);
  FUNC_7(VAR_1)->tx_compl += VAR_4;
  FUNC_9(&FUNC_7(VAR_1)->sync_compl);
 }
}
