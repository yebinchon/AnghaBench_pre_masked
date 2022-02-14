
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ac_iset; int ac_vset; } ;
struct abx500_chargalg {TYPE_3__* ac_chg; int dev; TYPE_1__ chg_info; } ;
struct TYPE_5__ {int (* enable ) (TYPE_3__*,int,int,int) ;} ;
struct TYPE_6__ {TYPE_2__ ops; scalar_t__ external; scalar_t__ max_out_curr; scalar_t__ max_out_volt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct abx500_chargalg *VAR_2, int VAR_3,
 int VAR_4, int VAR_5)
{
 static int VAR_6;

 if (!VAR_2->ac_chg || !VAR_2->ac_chg->ops.enable)
  return -VAR_0;


 if (VAR_2->ac_chg->max_out_volt)
  VAR_4 = FUNC_1(VAR_4, VAR_2->ac_chg->max_out_volt);
 if (VAR_2->ac_chg->max_out_curr)
  VAR_5 = FUNC_1(VAR_5, VAR_2->ac_chg->max_out_curr);

 VAR_2->chg_info.ac_iset = VAR_5;
 VAR_2->chg_info.ac_vset = VAR_4;


 if (VAR_3 && VAR_2->ac_chg->external &&
     !VAR_6) {
  FUNC_0(&VAR_1,
          0, VAR_2->dev);
  VAR_6++;
 }

 return VAR_2->ac_chg->ops.enable(VAR_2->ac_chg, VAR_3, VAR_4, VAR_5);
}
