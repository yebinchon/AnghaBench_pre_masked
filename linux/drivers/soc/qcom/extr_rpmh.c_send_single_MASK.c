
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct rpmh_ctrlr {int dummy; } ;
struct device {int dummy; } ;
typedef enum rpmh_state { ____Placeholder_rpmh_state } rpmh_state ;
struct TYPE_6__ {int wait_for_compl; int num_cmds; } ;
struct TYPE_7__ {TYPE_2__ msg; TYPE_1__* cmd; } ;
struct TYPE_5__ {void* data; void* addr; } ;


 int FUNC_0 (struct device const*,int,int *,TYPE_3__) ;
 int VAR_0 ;
 int FUNC_1 (struct rpmh_ctrlr*) ;
 struct rpmh_ctrlr* FUNC_2 (struct device const*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(const struct device *VAR_2, enum rpmh_state VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 FUNC_0(VAR_2, VAR_3, ((void*)0), VAR_1);
 struct rpmh_ctrlr *VAR_6 = FUNC_2(VAR_2);


 VAR_1.msg.wait_for_compl = (VAR_3 == VAR_0);
 VAR_1.cmd[0].addr = VAR_4;
 VAR_1.cmd[0].data = VAR_5;
 VAR_1.msg.num_cmds = 1;

 return FUNC_3(FUNC_1(VAR_6), &VAR_1.msg);
}
