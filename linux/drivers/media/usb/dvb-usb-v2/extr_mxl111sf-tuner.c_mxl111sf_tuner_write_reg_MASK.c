
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mxl111sf_tuner_state {int mxl_state; TYPE_1__* cfg; } ;
struct TYPE_2__ {int (* write_reg ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mxl111sf_tuner_state *VAR_1,
        u8 VAR_2, u8 VAR_3)
{
 return (VAR_1->cfg->write_reg) ?
  VAR_1->cfg->write_reg(VAR_1->mxl_state, VAR_2, VAR_3) :
  -VAR_0;
}
