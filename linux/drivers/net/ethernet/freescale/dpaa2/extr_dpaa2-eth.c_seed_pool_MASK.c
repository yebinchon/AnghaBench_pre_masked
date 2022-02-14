
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dpaa2_eth_priv {int num_channels; TYPE_1__** channel; } ;
struct TYPE_2__ {int buf_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dpaa2_eth_priv*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(struct dpaa2_eth_priv *VAR_3, u16 VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_channels; VAR_6++) {
  for (VAR_5 = 0; VAR_5 < VAR_1;
       VAR_5 += VAR_0) {
   VAR_7 = FUNC_0(VAR_3, VAR_3->channel[VAR_6], VAR_4);
   VAR_3->channel[VAR_6]->buf_count += VAR_7;

   if (VAR_7 < VAR_0) {
    return -VAR_2;
   }
  }
 }

 return 0;
}
