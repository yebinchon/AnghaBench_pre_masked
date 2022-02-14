
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int num_cmds; int * cmds; } ;
struct rpmh_request {TYPE_1__ msg; } ;
struct rpmh_ctrlr {int dummy; } ;
struct device {int dummy; } ;
struct cache_req {int dummy; } ;
typedef enum rpmh_state { ____Placeholder_rpmh_state } rpmh_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cache_req*) ;
 int FUNC_1 (struct cache_req*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct cache_req* FUNC_3 (struct rpmh_ctrlr*,int,int *) ;
 int FUNC_4 (struct rpmh_ctrlr*) ;
 struct rpmh_ctrlr* FUNC_5 (struct device const*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_9(const struct device *VAR_2, enum rpmh_state VAR_3,
   struct rpmh_request *VAR_4)
{
 struct rpmh_ctrlr *VAR_5 = FUNC_5(VAR_2);
 int VAR_6 = -VAR_0;
 struct cache_req *VAR_7;
 int VAR_8;

 VAR_4->msg.state = VAR_3;


 for (VAR_8 = 0; VAR_8 < VAR_4->msg.num_cmds; VAR_8++) {
  VAR_7 = FUNC_3(VAR_5, VAR_3, &VAR_4->msg.cmds[VAR_8]);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
 }

 VAR_4->msg.state = VAR_3;

 if (VAR_3 == VAR_1) {
  FUNC_2(FUNC_6());
  VAR_6 = FUNC_7(FUNC_4(VAR_5), &VAR_4->msg);
 } else {

  VAR_6 = 0;
  FUNC_8(&VAR_4->msg, VAR_6);
 }

 return VAR_6;
}
