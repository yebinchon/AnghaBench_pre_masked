
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct net_device {unsigned int num_tx_queues; } ;
struct TYPE_2__ {int stat_string; } ;


 int VAR_0 ;



 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_9, u32 VAR_10,
         u8 *VAR_11)
{
 char *VAR_12 = (char *)VAR_11;
 unsigned int VAR_13;

 switch (VAR_10) {
 case 128:
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   FUNC_0(VAR_11, VAR_7[VAR_13], VAR_0);
   VAR_11 += VAR_0;
  }
  break;
 case 129:
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   FUNC_0(VAR_12, VAR_6[VAR_13].stat_string,
          VAR_0);
   VAR_12 += VAR_0;
  }
  for (VAR_13 = 0; VAR_13 < VAR_9->num_tx_queues; VAR_13++) {
   FUNC_1(VAR_12, "tx_queue_%u_packets", VAR_13);
   VAR_12 += VAR_0;
   FUNC_1(VAR_12, "tx_queue_%u_bytes", VAR_13);
   VAR_12 += VAR_0;
  }
  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   FUNC_1(VAR_12, "rx_queue_%u_packets", VAR_13);
   VAR_12 += VAR_0;
   FUNC_1(VAR_12, "rx_queue_%u_bytes", VAR_13);
   VAR_12 += VAR_0;
  }
  for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
   FUNC_1(VAR_12, "tx_pb_%u_pxon", VAR_13);
   VAR_12 += VAR_0;
   FUNC_1(VAR_12, "tx_pb_%u_pxoff", VAR_13);
   VAR_12 += VAR_0;
  }
  for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
   FUNC_1(VAR_12, "rx_pb_%u_pxon", VAR_13);
   VAR_12 += VAR_0;
   FUNC_1(VAR_12, "rx_pb_%u_pxoff", VAR_13);
   VAR_12 += VAR_0;
  }

  break;
 case 130:
  FUNC_0(VAR_11, VAR_8,
         VAR_4 * VAR_0);
 }
}
