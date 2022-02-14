
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sja1105_private {TYPE_1__* info; } ;
struct dsa_switch {struct sja1105_private* priv; } ;
struct TYPE_2__ {int device_id; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(struct dsa_switch *VAR_5, int VAR_6,
    u32 VAR_7, u8 *VAR_8)
{
 struct sja1105_private *VAR_9 = VAR_5->priv;
 u8 *VAR_10 = VAR_8;
 int VAR_11;

 switch (VAR_7) {
 case 128:
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
   FUNC_1(VAR_10, VAR_3[VAR_11], VAR_0);
   VAR_10 += VAR_0;
  }
  if (VAR_9->info->device_id == VAR_1 ||
      VAR_9->info->device_id == VAR_2)
   return;
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
   FUNC_1(VAR_10, VAR_4[VAR_11],
    VAR_0);
   VAR_10 += VAR_0;
  }
  break;
 }
}
