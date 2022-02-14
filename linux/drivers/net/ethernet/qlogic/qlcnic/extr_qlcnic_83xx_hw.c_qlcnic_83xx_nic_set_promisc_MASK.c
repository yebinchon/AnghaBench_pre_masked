
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; int type; } ;
struct qlcnic_adapter {TYPE_2__* recv_ctx; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qlcnic_cmd_args*) ;
 struct qlcnic_cmd_args* FUNC_1 (int,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_5 (struct qlcnic_cmd_args*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;
 scalar_t__ FUNC_7 (struct qlcnic_adapter*) ;

int FUNC_8(struct qlcnic_adapter *VAR_7, u32 VAR_8)
{
 struct qlcnic_cmd_args *VAR_9 = ((void*)0);
 u32 VAR_10 = 0;
 int VAR_11;

 if (VAR_7->recv_ctx->state == VAR_4)
  return -VAR_0;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_9, VAR_7,
        VAR_3);
 if (VAR_11)
  goto out;

 VAR_9->type = VAR_5;
 FUNC_2(VAR_7, &VAR_10);

 if (FUNC_3(VAR_7) && FUNC_7(VAR_7))
  VAR_8 = VAR_6;

 VAR_9->req.arg[1] = VAR_8 | VAR_10;
 VAR_11 = FUNC_6(VAR_7, VAR_9);
 if (!VAR_11)
  return VAR_11;

 FUNC_5(VAR_9);

out:
 FUNC_0(VAR_9);
 return VAR_11;
}
