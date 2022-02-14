
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta {int dummy; } ;
struct dma_pub {int dummy; } ;
struct brcms_hardware {struct dma_pub** di; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_pub*,void*,struct ieee80211_sta*) ;

void FUNC_1(struct brcms_hardware *VAR_1,
          struct ieee80211_sta *VAR_2,
          void (*VAR_3))
{
 struct dma_pub *VAR_4;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = VAR_1->di[VAR_5];
  if (VAR_4 != ((void*)0))
   FUNC_0(VAR_4, VAR_3, VAR_2);
 }
}
