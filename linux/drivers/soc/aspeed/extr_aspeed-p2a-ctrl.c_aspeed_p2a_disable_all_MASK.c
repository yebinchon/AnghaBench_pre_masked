
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aspeed_p2a_ctrl {int regmap; TYPE_2__* config; } ;
struct TYPE_4__ {TYPE_1__* regions; } ;
struct TYPE_3__ {int bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aspeed_p2a_ctrl*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct aspeed_p2a_ctrl *VAR_2)
{
 int VAR_3;
 u32 VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_4 |= VAR_2->config->regions[VAR_3].bit;

 FUNC_1(VAR_2->regmap, VAR_1, VAR_4, VAR_4);


 FUNC_0(VAR_2);
}
