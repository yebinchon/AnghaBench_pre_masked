
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int nstats_port; int port_valid_ix; } ;
struct TYPE_4__ {TYPE_1__ ctl; } ;
struct fw_fcoe_stats_cmd {TYPE_2__ u; void* free_to_len16; void* op_to_flowid; } ;
struct fw_fcoe_port_cmd_params {int idx; int portid; int nstats; } ;
struct csio_mb {int mb_size; scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_mb*,struct fw_fcoe_stats_cmd*,int ,struct csio_hw*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 void* FUNC_6 (int) ;

void
FUNC_7(struct csio_hw *VAR_5, struct csio_mb *VAR_6,
    uint32_t VAR_7,
    struct fw_fcoe_port_cmd_params *VAR_8,
    void (*VAR_9)(struct csio_hw *,
          struct csio_mb *))
{
 struct fw_fcoe_stats_cmd *VAR_10 = (struct fw_fcoe_stats_cmd *)(VAR_6->mb);

 FUNC_0(VAR_6, VAR_10, VAR_7, VAR_5, VAR_9, 1);
 VAR_6->mb_size = 64;

 VAR_10->op_to_flowid = FUNC_6(FUNC_2(VAR_3) |
       VAR_2 | VAR_1);
 VAR_10->free_to_len16 = FUNC_6(FUNC_1(VAR_0/16));

 VAR_10->u.ctl.nstats_port = FUNC_4(VAR_8->nstats) |
      FUNC_5(VAR_8->portid);

 VAR_10->u.ctl.port_valid_ix = FUNC_3(VAR_8->idx) |
        VAR_4;

}
