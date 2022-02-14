
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_sdio_glue {int core; } ;
struct sdio_func {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct wl12xx_sdio_glue* FUNC_2 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_3(struct sdio_func *VAR_0)
{
 struct wl12xx_sdio_glue *VAR_1 = FUNC_2(VAR_0);


 FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1->core);
}
