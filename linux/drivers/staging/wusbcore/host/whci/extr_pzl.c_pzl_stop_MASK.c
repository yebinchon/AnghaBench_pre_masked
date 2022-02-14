
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct whc {scalar_t__ base; TYPE_1__* umc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct whc*,int ,int ) ;
 int FUNC_1 (int *,scalar_t__,int ,int ,int,char*) ;

void FUNC_2(struct whc *VAR_3)
{
 FUNC_0(VAR_3, VAR_0, 0);
 FUNC_1(&VAR_3->umc->dev, VAR_3->base + VAR_1,
        VAR_2, 0,
        1000, "stop PZL");
}
