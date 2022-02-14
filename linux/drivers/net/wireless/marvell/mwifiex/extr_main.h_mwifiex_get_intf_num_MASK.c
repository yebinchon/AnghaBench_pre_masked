
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mwifiex_adapter {size_t priv_num; TYPE_1__** priv; } ;
struct TYPE_2__ {size_t bss_type; } ;



__attribute__((used)) static inline u8
FUNC_0(struct mwifiex_adapter *VAR_0, u8 VAR_1)
{
 u8 VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->priv_num; VAR_2++)
  if (VAR_0->priv[VAR_2] && VAR_0->priv[VAR_2]->bss_type == VAR_1)
   VAR_3++;
 return VAR_3;
}
