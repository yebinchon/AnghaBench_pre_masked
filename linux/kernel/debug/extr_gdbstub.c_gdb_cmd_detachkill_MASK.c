
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kgdb_state {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct kgdb_state *VAR_3)
{
 int VAR_4;


 if (VAR_1[0] == 'D') {
  VAR_4 = FUNC_0();
  if (VAR_4 < 0) {
   FUNC_1(VAR_2, VAR_4);
  } else {
   FUNC_3(VAR_2, "OK");
   VAR_0 = 0;
  }
  FUNC_2(VAR_2);
 } else {




  FUNC_0();
  VAR_0 = 0;
 }
}
