
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_target {int htc_flags; struct htc_endpoint* endpoint; } ;
struct htc_endpoint {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct htc_target*,struct htc_endpoint*) ;
 int FUNC_1 (struct htc_target*,struct htc_endpoint*,int ) ;
 int FUNC_2 (struct htc_target*) ;

__attribute__((used)) static void FUNC_3(struct htc_target *VAR_3)
{
 int VAR_4;
 struct htc_endpoint *VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = &VAR_3->endpoint[VAR_4];
  FUNC_0(VAR_3, VAR_5);
  FUNC_1(VAR_3, VAR_5, VAR_2);
 }

 FUNC_2(VAR_3);
 VAR_3->htc_flags &= ~VAR_1;
}
