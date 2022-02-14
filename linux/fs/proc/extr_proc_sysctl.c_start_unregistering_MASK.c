
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table_header {struct completion* unregistering; int used; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 struct completion* FUNC_0 (int ) ;
 int FUNC_1 (struct ctl_table_header*) ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (struct ctl_table_header*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct completion*) ;

__attribute__((used)) static void FUNC_8(struct ctl_table_header *VAR_2)
{




 if (FUNC_6(VAR_2->used)) {
  struct completion VAR_3;
  FUNC_2(&VAR_3);
  VAR_2->unregistering = &VAR_3;
  FUNC_5(&VAR_1);
  FUNC_7(&VAR_3);
 } else {

  VAR_2->unregistering = FUNC_0(-VAR_0);
  FUNC_5(&VAR_1);
 }




 FUNC_3(VAR_2);




 FUNC_4(&VAR_1);
 FUNC_1(VAR_2);
}
