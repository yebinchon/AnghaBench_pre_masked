
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int rx_buff; int rx_max_frame; int rx_index; int rx_memcpy; } ;
struct ntb_queue_entry {struct ntb_transport_qp* qp; int flags; int errors; } ;
struct dmaengine_result {int result; } ;
typedef enum dmaengine_tx_result { ____Placeholder_dmaengine_tx_result } dmaengine_tx_result ;


 int VAR_0 ;




 int FUNC_0 (struct ntb_transport_qp*) ;
 int FUNC_1 (struct ntb_queue_entry*,void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1,
     const struct dmaengine_result *VAR_2)
{
 struct ntb_queue_entry *VAR_3 = VAR_1;


 if (VAR_2) {
  enum dmaengine_tx_result VAR_4 = VAR_2->result;

  switch (VAR_4) {
  case 129:
  case 128:
   VAR_3->errors++;

  case 131:
  {
   struct ntb_transport_qp *VAR_5 = VAR_3->qp;
   void *VAR_6 = VAR_5->rx_buff + VAR_5->rx_max_frame *
     VAR_5->rx_index;

   FUNC_1(VAR_3, VAR_6);
   VAR_5->rx_memcpy++;
   return;
  }

  case 130:
  default:
   break;
  }
 }

 VAR_3->flags |= VAR_0;

 FUNC_0(VAR_3->qp);
}
