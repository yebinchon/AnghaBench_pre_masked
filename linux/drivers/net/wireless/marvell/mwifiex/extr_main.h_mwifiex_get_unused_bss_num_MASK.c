
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mwifiex_adapter {size_t priv_num; TYPE_1__** priv; } ;
typedef int index ;
struct TYPE_2__ {size_t bss_type; scalar_t__ bss_mode; size_t bss_num; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static inline u8
FUNC_1(struct mwifiex_adapter *VAR_2, u8 VAR_3)
{
 u8 VAR_4, VAR_5;
 int VAR_6[VAR_0];

 FUNC_0(VAR_6, 0, sizeof(VAR_6));
 for (VAR_4 = 0; VAR_4 < VAR_2->priv_num; VAR_4++)
  if (VAR_2->priv[VAR_4]) {
   if (VAR_2->priv[VAR_4]->bss_type == VAR_3 &&
       !(VAR_2->priv[VAR_4]->bss_mode ==
         VAR_1)) {
    VAR_6[VAR_2->priv[VAR_4]->bss_num] = 1;
   }
  }
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (!VAR_6[VAR_5])
   return VAR_5;
 return -1;
}
