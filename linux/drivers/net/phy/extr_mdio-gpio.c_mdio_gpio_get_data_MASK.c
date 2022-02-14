
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_gpio_info {int mdo; void* mdio; void* mdc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct device*,int *,int ,int ) ;
 int FUNC_4 (struct device*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5,
         struct mdio_gpio_info *VAR_6)
{
 VAR_6->mdc = FUNC_3(VAR_5, ((void*)0), VAR_2,
         VAR_1);
 if (FUNC_0(VAR_6->mdc))
  return FUNC_1(VAR_6->mdc);

 VAR_6->mdio = FUNC_3(VAR_5, ((void*)0), VAR_3,
          VAR_0);
 if (FUNC_0(VAR_6->mdio))
  return FUNC_1(VAR_6->mdio);

 VAR_6->mdo = FUNC_4(VAR_5, ((void*)0), VAR_4,
           VAR_1);
 return FUNC_2(VAR_6->mdo);
}
