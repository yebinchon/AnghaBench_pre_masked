
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct net_device {int dummy; } ;
struct be_adapter {int num_rx_qs; int num_tx_qs; } ;
struct TYPE_6__ {char* desc; } ;
struct TYPE_5__ {int desc; } ;
struct TYPE_4__ {char* desc; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int * VAR_5 ;
 TYPE_3__* VAR_6 ;
 int * VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_1 (int *,int ,int) ;
 struct be_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,char*,int,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_10, uint32_t VAR_11,
    uint8_t *VAR_12)
{
 struct be_adapter *VAR_13 = FUNC_2(VAR_10);
 int VAR_14, VAR_15;

 switch (VAR_11) {
 case 129:
  for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
   FUNC_1(VAR_12, VAR_8[VAR_14].desc, VAR_4);
   VAR_12 += VAR_4;
  }
  for (VAR_14 = 0; VAR_14 < VAR_13->num_rx_qs; VAR_14++) {
   for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
    FUNC_3(VAR_12, "rxq%d: %s", VAR_14,
     VAR_6[VAR_15].desc);
    VAR_12 += VAR_4;
   }
  }
  for (VAR_14 = 0; VAR_14 < VAR_13->num_tx_qs; VAR_14++) {
   for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
    FUNC_3(VAR_12, "txq%d: %s", VAR_14,
     VAR_9[VAR_15].desc);
    VAR_12 += VAR_4;
   }
  }
  break;
 case 128:
  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
   FUNC_1(VAR_12, VAR_7[VAR_14], VAR_4);
   VAR_12 += VAR_4;
  }
  break;
 case 130:
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5); VAR_14++)
   FUNC_4(VAR_12 + VAR_14 * VAR_4, VAR_5[VAR_14]);
  break;
 }
}
