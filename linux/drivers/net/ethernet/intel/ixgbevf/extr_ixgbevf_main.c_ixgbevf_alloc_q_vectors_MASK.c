
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {int num_msix_vectors; int num_rx_queues; int num_tx_queues; int num_xdp_queues; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ixgbevf_adapter*,int,int,int,int,int,int,int) ;
 int FUNC_2 (struct ixgbevf_adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct ixgbevf_adapter *VAR_2)
{
 int VAR_3 = VAR_2->num_msix_vectors - VAR_1;
 int VAR_4 = VAR_2->num_rx_queues;
 int VAR_5 = VAR_2->num_tx_queues;
 int VAR_6 = VAR_2->num_xdp_queues;
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 int VAR_11;

 if (VAR_3 >= (VAR_4 + VAR_5 + VAR_6)) {
  for (; VAR_4; VAR_10++, VAR_3--) {
   int VAR_12 = FUNC_0(VAR_4, VAR_3);

   VAR_11 = FUNC_1(VAR_2, VAR_10,
           0, 0, 0, 0, VAR_12, VAR_7);
   if (VAR_11)
    goto err_out;


   VAR_4 -= VAR_12;
   VAR_7 += VAR_12;
  }
 }

 for (; VAR_3; VAR_10++, VAR_3--) {
  int VAR_13 = FUNC_0(VAR_4, VAR_3);
  int VAR_14 = FUNC_0(VAR_5, VAR_3);
  int VAR_15 = FUNC_0(VAR_6, VAR_3);

  VAR_11 = FUNC_1(VAR_2, VAR_10,
          VAR_14, VAR_8,
          VAR_15, VAR_9,
          VAR_13, VAR_7);

  if (VAR_11)
   goto err_out;


  VAR_4 -= VAR_13;
  VAR_7 += VAR_13;
  VAR_5 -= VAR_14;
  VAR_8 += VAR_14;
  VAR_6 -= VAR_15;
  VAR_9 += VAR_15;
 }

 return 0;

err_out:
 while (VAR_10) {
  VAR_10--;
  FUNC_2(VAR_2, VAR_10);
 }

 return -VAR_0;
}
