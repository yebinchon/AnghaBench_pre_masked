
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_19__ {size_t prod; int comp; } ;
struct TYPE_20__ {int lword; TYPE_7__ index; } ;
struct TYPE_16__ {size_t prod; int comp; } ;
struct TYPE_17__ {int lword; TYPE_4__ index; } ;
struct TYPE_21__ {TYPE_8__ cmd_rsp_reg; TYPE_6__* cons_block_virt; TYPE_5__ cmd_req_reg; int cmd_req_phys; TYPE_3__* descr_block_virt; int cmd_rsp_phys; } ;
struct TYPE_18__ {scalar_t__ cmd_rsp; scalar_t__ cmd_req; } ;
struct TYPE_15__ {TYPE_2__* cmd_req; TYPE_1__* cmd_rsp; } ;
struct TYPE_14__ {int long_1; void* long_0; } ;
struct TYPE_13__ {int long_1; void* long_0; } ;
typedef TYPE_9__ DFX_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(DFX_board_t *VAR_19)
 {
 int VAR_20;
 int VAR_21;



 VAR_20 = FUNC_0(VAR_19);
 if ((VAR_20 == VAR_14) ||
  (VAR_20 == VAR_13) ||
  (VAR_20 == VAR_12) ||
  (VAR_20 == VAR_15))
  return VAR_1;



 VAR_19->descr_block_virt->cmd_rsp[VAR_19->cmd_rsp_reg.index.prod].long_0 = (u32) (VAR_10 |
   ((VAR_7 / VAR_3) << VAR_11));
 VAR_19->descr_block_virt->cmd_rsp[VAR_19->cmd_rsp_reg.index.prod].long_1 = VAR_19->cmd_rsp_phys;



 VAR_19->cmd_rsp_reg.index.prod += 1;
 VAR_19->cmd_rsp_reg.index.prod &= VAR_6-1;
 FUNC_1(VAR_19, VAR_9, VAR_19->cmd_rsp_reg.lword);



 VAR_19->descr_block_virt->cmd_req[VAR_19->cmd_req_reg.index.prod].long_0 = (u32) (VAR_17 |
   VAR_16 | (VAR_5 << VAR_18));
 VAR_19->descr_block_virt->cmd_req[VAR_19->cmd_req_reg.index.prod].long_1 = VAR_19->cmd_req_phys;



 VAR_19->cmd_req_reg.index.prod += 1;
 VAR_19->cmd_req_reg.index.prod &= VAR_4-1;
 FUNC_1(VAR_19, VAR_8, VAR_19->cmd_req_reg.lword);






 for (VAR_21 = 20000; VAR_21 > 0; VAR_21--)
  {
  if (VAR_19->cmd_req_reg.index.prod == (u8)(VAR_19->cons_block_virt->cmd_req))
   break;
  FUNC_2(100);
  }
 if (VAR_21 == 0)
  return VAR_0;



 VAR_19->cmd_req_reg.index.comp += 1;
 VAR_19->cmd_req_reg.index.comp &= VAR_4-1;
 FUNC_1(VAR_19, VAR_8, VAR_19->cmd_req_reg.lword);






 for (VAR_21 = 20000; VAR_21 > 0; VAR_21--)
  {
  if (VAR_19->cmd_rsp_reg.index.prod == (u8)(VAR_19->cons_block_virt->cmd_rsp))
   break;
  FUNC_2(100);
  }
 if (VAR_21 == 0)
  return VAR_0;



 VAR_19->cmd_rsp_reg.index.comp += 1;
 VAR_19->cmd_rsp_reg.index.comp &= VAR_6-1;
 FUNC_1(VAR_19, VAR_9, VAR_19->cmd_rsp_reg.lword);
 return VAR_2;
 }
