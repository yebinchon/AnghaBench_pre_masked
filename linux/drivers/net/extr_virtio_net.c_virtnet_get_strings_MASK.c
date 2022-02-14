
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct virtnet_info {unsigned int curr_queue_pairs; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {char* desc; } ;
struct TYPE_3__ {char* desc; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,char*,unsigned int,char*) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 struct virtnet_info *VAR_8 = FUNC_0(VAR_5);
 char *VAR_9 = (char *)VAR_7;
 unsigned int VAR_10, VAR_11;

 switch (VAR_6) {
 case 128:
  for (VAR_10 = 0; VAR_10 < VAR_8->curr_queue_pairs; VAR_10++) {
   for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
    FUNC_1(VAR_9, VAR_0, "rx_queue_%u_%s",
      VAR_10, VAR_3[VAR_11].desc);
    VAR_9 += VAR_0;
   }
  }

  for (VAR_10 = 0; VAR_10 < VAR_8->curr_queue_pairs; VAR_10++) {
   for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
    FUNC_1(VAR_9, VAR_0, "tx_queue_%u_%s",
      VAR_10, VAR_4[VAR_11].desc);
    VAR_9 += VAR_0;
   }
  }
  break;
 }
}
