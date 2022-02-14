
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct htc_target {struct htc_endpoint* endpoint; } ;
struct htc_endpoint {scalar_t__ svc_id; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct htc_target*,struct htc_endpoint*,int ) ;

__attribute__((used)) static void FUNC_2(struct htc_target *VAR_0,
           enum htc_endpoint_id VAR_1, u16 VAR_2)
{
 struct htc_endpoint *VAR_3 = &VAR_0->endpoint[VAR_1];

 if (VAR_3->svc_id == 0) {
  FUNC_0(1);

  return;
 }

 FUNC_1(VAR_0, VAR_3, VAR_2);
}
