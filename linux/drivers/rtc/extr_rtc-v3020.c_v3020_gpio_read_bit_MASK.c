
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v3020 {TYPE_1__* gpio; } ;
struct TYPE_2__ {int gpio; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned char FUNC_4(struct v3020 *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->gpio[VAR_1].gpio);
 FUNC_2(VAR_3->gpio[VAR_0].gpio, 0);
 FUNC_2(VAR_3->gpio[VAR_2].gpio, 0);
 FUNC_3(1);
 VAR_4 = !!FUNC_1(VAR_3->gpio[VAR_1].gpio);
 FUNC_3(1);
 FUNC_2(VAR_3->gpio[VAR_2].gpio, 1);
 FUNC_2(VAR_3->gpio[VAR_0].gpio, 1);

 return VAR_4;
}
