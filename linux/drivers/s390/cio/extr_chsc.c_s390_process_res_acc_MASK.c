
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cssid; int id; } ;
struct chp_link {int fla; TYPE_1__ chpid; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,struct chp_link*) ;
 int FUNC_4 (char*,char*,int,...) ;

__attribute__((used)) static void FUNC_5(struct chp_link *VAR_1)
{
 char VAR_2[15];

 FUNC_4(VAR_2, "accpr%x.%02x", VAR_1->chpid.cssid,
  VAR_1->chpid.id);
 FUNC_0( 2, VAR_2);
 if (VAR_1->fla != 0) {
  FUNC_4(VAR_2, "fla%x", VAR_1->fla);
  FUNC_0( 2, VAR_2);
 }

 FUNC_2();







 FUNC_3(VAR_0, ((void*)0), VAR_1);
 FUNC_1();
}
