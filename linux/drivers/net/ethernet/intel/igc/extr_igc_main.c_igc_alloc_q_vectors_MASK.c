
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igc_adapter {int num_rx_queues; int num_tx_queues; int num_q_vectors; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct igc_adapter*,int,int,int,int,int,int) ;
 int FUNC_2 (struct igc_adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct igc_adapter *VAR_1)
{
 int VAR_2 = VAR_1->num_rx_queues;
 int VAR_3 = VAR_1->num_tx_queues;
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 int VAR_7 = VAR_1->num_q_vectors;
 int VAR_8;

 if (VAR_7 >= (VAR_2 + VAR_3)) {
  for (; VAR_2; VAR_6++) {
   VAR_8 = FUNC_1(VAR_1, VAR_7, VAR_6,
       0, 0, 1, VAR_4);

   if (VAR_8)
    goto err_out;


   VAR_2--;
   VAR_4++;
  }
 }

 for (; VAR_6 < VAR_7; VAR_6++) {
  int VAR_9 = FUNC_0(VAR_2, VAR_7 - VAR_6);
  int VAR_10 = FUNC_0(VAR_3, VAR_7 - VAR_6);

  VAR_8 = FUNC_1(VAR_1, VAR_7, VAR_6,
      VAR_10, VAR_5, VAR_9, VAR_4);

  if (VAR_8)
   goto err_out;


  VAR_2 -= VAR_9;
  VAR_3 -= VAR_10;
  VAR_4++;
  VAR_5++;
 }

 return 0;

err_out:
 VAR_1->num_tx_queues = 0;
 VAR_1->num_rx_queues = 0;
 VAR_1->num_q_vectors = 0;

 while (VAR_6--)
  FUNC_2(VAR_1, VAR_6);

 return -VAR_0;
}
