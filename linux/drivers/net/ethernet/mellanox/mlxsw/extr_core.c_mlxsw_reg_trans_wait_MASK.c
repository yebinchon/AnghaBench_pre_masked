
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_reg_trans {int err; int bulk_list; int emad_status; int type; TYPE_2__* reg; int tid; int retries; int timeout_dw; int completion; struct mlxsw_core* core; } ;
struct mlxsw_core {TYPE_1__* bus_info; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct mlxsw_reg_trans*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mlxsw_core*) ;
 int VAR_1 ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct mlxsw_reg_trans *VAR_2)
{
 struct mlxsw_core *VAR_3 = VAR_2->core;
 int VAR_4;

 FUNC_10(&VAR_2->completion);
 FUNC_0(&VAR_2->timeout_dw);
 VAR_4 = VAR_2->err;

 if (VAR_2->retries)
  FUNC_2(VAR_3->bus_info->dev, "EMAD retries (%d/%d) (tid=%llx)\n",
    VAR_2->retries, VAR_0, VAR_2->tid);
 if (VAR_4) {
  FUNC_1(VAR_3->bus_info->dev, "EMAD reg access failed (tid=%llx,reg_id=%x(%s),type=%s,status=%x(%s))\n",
   VAR_2->tid, VAR_2->reg->id,
   FUNC_7(VAR_2->reg->id),
   FUNC_5(VAR_2->type),
   VAR_2->emad_status,
   FUNC_6(VAR_2->emad_status));
  FUNC_9(FUNC_8(VAR_3),
        VAR_2->emad_status,
        FUNC_6(VAR_2->emad_status));
 }

 FUNC_4(&VAR_2->bulk_list);
 FUNC_3(VAR_2, VAR_1);
 return VAR_4;
}
