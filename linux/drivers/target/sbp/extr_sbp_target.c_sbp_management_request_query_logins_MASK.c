
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
struct sbp_management_request {TYPE_1__ status; } ;
struct sbp_management_agent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(
 struct sbp_management_agent *VAR_2, struct sbp_management_request *VAR_3,
 int *VAR_4)
{
 FUNC_3("QUERY LOGINS not implemented\n");


 VAR_3->status.status = FUNC_2(
  FUNC_0(VAR_1) |
  FUNC_1(VAR_0));
}
