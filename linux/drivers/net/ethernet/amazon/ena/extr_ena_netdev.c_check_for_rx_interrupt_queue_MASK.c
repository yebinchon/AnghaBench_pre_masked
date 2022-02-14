
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {scalar_t__ no_interrupt_event_cnt; int qid; int ena_com_io_cq; int first_interrupt; } ;
struct ena_adapter {int flags; int reset_reason; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ena_adapter*,int ,int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ena_adapter *VAR_5,
     struct ena_ring *VAR_6)
{
 if (FUNC_1(VAR_6->first_interrupt))
  return 0;

 if (FUNC_0(VAR_6->ena_com_io_cq))
  return 0;

 VAR_6->no_interrupt_event_cnt++;

 if (VAR_6->no_interrupt_event_cnt == VAR_2) {
  FUNC_2(VAR_5, VAR_4, VAR_5->netdev,
     "Potential MSIX issue on Rx side Queue = %d. Reset the device\n",
     VAR_6->qid);
  VAR_5->reset_reason = VAR_3;
  FUNC_4();
  FUNC_3(VAR_1, &VAR_5->flags);
  return -VAR_0;
 }

 return 0;
}
