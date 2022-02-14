
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {unsigned int num_tx_queues; } ;


 int FUNC_0 (int **,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2, u8 *VAR_3)
{
 unsigned int VAR_4;

 FUNC_0(&VAR_3, VAR_1);




 for (VAR_4 = 0; VAR_4 < VAR_2->num_tx_queues; VAR_4++) {
  FUNC_0(&VAR_3, VAR_0,
          "tx", VAR_4);
  FUNC_0(&VAR_3, VAR_0,
          "rx", VAR_4);
 }
}
