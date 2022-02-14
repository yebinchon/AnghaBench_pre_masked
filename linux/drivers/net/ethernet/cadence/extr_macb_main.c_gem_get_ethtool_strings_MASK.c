
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct macb_queue {int dummy; } ;
struct macb {unsigned int num_queues; struct macb_queue* queues; } ;
struct TYPE_4__ {char* stat_string; } ;
struct TYPE_3__ {char* stat_string; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 struct macb* FUNC_1 (struct net_device*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (char*,int,char*,unsigned int,char*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 char VAR_8[VAR_0];
 struct macb *VAR_9 = FUNC_1(VAR_5);
 struct macb_queue *VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 switch (VAR_6) {
 case 128:
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++, VAR_7 += VAR_0)
   FUNC_0(VAR_7, VAR_3[VAR_11].stat_string,
          VAR_0);

  for (VAR_12 = 0, VAR_10 = VAR_9->queues; VAR_12 < VAR_9->num_queues; ++VAR_12, ++VAR_10) {
   for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++, VAR_7 += VAR_0) {
    FUNC_2(VAR_8, VAR_0, "q%d_%s",
      VAR_12, VAR_4[VAR_11].stat_string);
    FUNC_0(VAR_7, VAR_8, VAR_0);
   }
  }
  break;
 }
}
