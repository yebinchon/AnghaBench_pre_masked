
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_tm_dev {TYPE_1__* data; int regmap; } ;
struct TYPE_2__ {scalar_t__ map_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_3(struct uniphier_tm_dev *VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 |= (FUNC_0(VAR_5) | FUNC_1(VAR_5));
  VAR_4 |= FUNC_0(VAR_5);
 }


 FUNC_2(VAR_2->regmap,
     VAR_2->data->map_base + VAR_1, VAR_3, VAR_4);
}
