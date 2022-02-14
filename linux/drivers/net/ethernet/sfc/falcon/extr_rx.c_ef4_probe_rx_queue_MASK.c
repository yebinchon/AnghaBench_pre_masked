
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_rx_queue {unsigned int ptr_mask; int * buffer; struct ef4_nic* efx; } ;
struct ef4_nic {int rxq_entries; int net_dev; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ef4_rx_queue*) ;
 int FUNC_2 (struct ef4_rx_queue*) ;
 int * FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ef4_nic*,int ,int ,char*,int ,int ,unsigned int) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

int FUNC_8(struct ef4_rx_queue *VAR_5)
{
 struct ef4_nic *VAR_6 = VAR_5->efx;
 unsigned int VAR_7;
 int VAR_8;


 VAR_7 = FUNC_5(FUNC_7(VAR_6->rxq_entries), VAR_1);
 FUNC_0(VAR_7 > VAR_0);
 VAR_5->ptr_mask = VAR_7 - 1;

 FUNC_6(VAR_6, VAR_4, VAR_6->net_dev,
    "creating RX queue %d size %#x mask %#x\n",
    FUNC_2(VAR_5), VAR_6->rxq_entries,
    VAR_5->ptr_mask);


 VAR_5->buffer = FUNC_3(VAR_7, sizeof(*VAR_5->buffer),
       VAR_3);
 if (!VAR_5->buffer)
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8) {
  FUNC_4(VAR_5->buffer);
  VAR_5->buffer = ((void*)0);
 }

 return VAR_8;
}
