
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct whc {scalar_t__ base; int pz_list_dma; int * pz_list; TYPE_1__* umc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(struct whc *VAR_4)
{
 int VAR_5;

 VAR_4->pz_list = FUNC_2(&VAR_4->umc->dev, sizeof(u64) * 16,
       &VAR_4->pz_list_dma, VAR_1);
 if (VAR_4->pz_list == ((void*)0))
  return -VAR_0;


 for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
  VAR_4->pz_list[VAR_5] = FUNC_1(FUNC_0(8) | VAR_2);

 FUNC_3(VAR_4->pz_list_dma, VAR_4->base + VAR_3);

 return 0;
}
