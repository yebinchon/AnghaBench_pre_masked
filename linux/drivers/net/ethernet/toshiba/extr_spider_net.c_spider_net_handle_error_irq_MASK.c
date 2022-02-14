
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spider_net_card {int ignore_rx_ramfull; TYPE_1__* netdev; int napi; int num_rx_ints; } ;
struct TYPE_2__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct spider_net_card*) ;
 int FUNC_4 (struct spider_net_card*) ;
 int FUNC_5 (struct spider_net_card*) ;
 int FUNC_6 (struct spider_net_card*) ;
 int FUNC_7 (struct spider_net_card*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct spider_net_card *VAR_2, u32 VAR_3,
       u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 1;


 if (VAR_3)
  for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
   if (VAR_3 & (1<<VAR_6))
    switch (VAR_6)
 {
 case 138:
  VAR_7 = 0;
  break;

 case 135:

  VAR_7 = 0;
  break;
 case 137:




  VAR_7 = 0;
  break;
 case 136:

  if (FUNC_3(VAR_2))
   FUNC_0(&VAR_2->netdev->dev, "PHY write queue full\n");
  VAR_7 = 0;
  break;





 case 141:

  VAR_7 = 0;
  break;

 case 145:
 case 149:
 case 153:
 case 157:

  VAR_7 = 0;
  break;


 case 144:
 case 148:
 case 152:
 case 156:





  VAR_7 = 0;
  break;


 case 140:
  VAR_7 = 0;
  break;
 case 128:
  VAR_7 = 0;
  break;
 case 142:





  VAR_7 = 0;
  break;



 }


 if (VAR_4)
  for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
   if (VAR_4 & (1<<VAR_6))
    switch (VAR_6)
 {
 case 129:


  VAR_7 = 0;
  break;
 case 131:
 case 132:
 case 133:
 case 134:
 case 130:

  if (VAR_2->ignore_rx_ramfull == 0) {
   VAR_2->ignore_rx_ramfull = 1;
   FUNC_6(VAR_2);
   FUNC_5(VAR_2);
   FUNC_4(VAR_2);
   VAR_2->num_rx_ints ++;
   FUNC_1(&VAR_2->napi);
  }
  VAR_7 = 0;
  break;


 case 139:

  VAR_7 = 0;
  break;


 case 146:
 case 150:
 case 154:
 case 158:
  FUNC_6(VAR_2);
  FUNC_5(VAR_2);
  FUNC_4(VAR_2);
  VAR_2->num_rx_ints ++;
  FUNC_1(&VAR_2->napi);
  VAR_7 = 0;
  break;


 case 143:
 case 147:
 case 151:
 case 155:

  FUNC_6(VAR_2);
  FUNC_5(VAR_2);
  FUNC_4(VAR_2);
  VAR_2->num_rx_ints ++;
  FUNC_1(&VAR_2->napi);
  VAR_7 = 0;
  break;
 default:
  VAR_7 = 1;
  break;
 }


 if (VAR_5)
  for (VAR_6 = 0; VAR_6 < 32; VAR_6++)
   if (VAR_5 & (1<<VAR_6))
    switch (VAR_6)
 {
  default:
   break;
 }

 if ((VAR_7) && (FUNC_3(VAR_2)) && FUNC_2())
  FUNC_0(&VAR_2->netdev->dev, "Error interrupt, GHIINT0STS = 0x%08x, "
         "GHIINT1STS = 0x%08x, GHIINT2STS = 0x%08x\n",
         VAR_3, VAR_4, VAR_5);


 FUNC_7(VAR_2, VAR_0, VAR_4);
 FUNC_7(VAR_2, VAR_1, VAR_5);
}
