
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_6__ {int * parent; } ;
struct men_z069_drv {TYPE_1__ wdt; struct resource* mem; int * base; } ;
struct mcb_device_id {int dummy; } ;
struct mcb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct resource*) ;
 int FUNC_1 (struct resource*) ;
 int * FUNC_2 (int *,int ,int ) ;
 struct men_z069_drv* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct resource*) ;
 struct resource* FUNC_5 (struct mcb_device*,char*) ;
 int FUNC_6 (struct mcb_device*,struct men_z069_drv*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (TYPE_1__*,int ,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,struct men_z069_drv*) ;
 int FUNC_11 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_12(struct mcb_device *VAR_4,
     const struct mcb_device_id *VAR_5)
{
 struct men_z069_drv *VAR_6;
 struct resource *VAR_7;

 VAR_6 = FUNC_3(&VAR_4->dev, sizeof(struct men_z069_drv), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_4, "z069-wdt");
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6->base = FUNC_2(&VAR_4->dev, VAR_7->start, FUNC_7(VAR_7));
 if (VAR_6->base == ((void*)0))
  goto release_mem;

 VAR_6->mem = VAR_7;

 VAR_6->wdt = VAR_2;
 FUNC_8(&VAR_6->wdt, 0, &VAR_4->dev);
 FUNC_11(&VAR_6->wdt, VAR_3);
 FUNC_10(&VAR_6->wdt, VAR_6);
 VAR_6->wdt.parent = &VAR_4->dev;
 FUNC_6(VAR_4, VAR_6);

 return FUNC_9(&VAR_2);

release_mem:
 FUNC_4(VAR_7);
 return -VAR_0;
}
