
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_target {struct htc_endpoint* endpoint; } ;
struct htc_endpoint {scalar_t__ svc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct htc_target*,int,int ) ;
 int FUNC_1 (struct htc_target*) ;

__attribute__((used)) static void FUNC_2(struct htc_target *VAR_3)
{
 struct htc_endpoint *VAR_4;
 int VAR_5;

 FUNC_1(VAR_3);

 for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_3->endpoint[VAR_5];
  if (VAR_4->svc_id == 0)

   continue;
  FUNC_0(VAR_3, VAR_5, VAR_2);
 }
}
