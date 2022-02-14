
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_sprom {int dummy; } ;
struct TYPE_3__ {int type; int vendor; } ;
struct ssb_init_invariants {int has_cardbus_slot; TYPE_1__ sprom; TYPE_1__ boardinfo; } ;
struct ssb_bus {int dummy; } ;
struct ssb_boardinfo {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (struct ssb_bus*,TYPE_1__*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct ssb_bus *VAR_1,
    struct ssb_init_invariants *VAR_2)
{
 char VAR_3[20];
 int VAR_4, VAR_5;


 FUNC_2(&VAR_2->boardinfo, 0, sizeof(struct ssb_boardinfo));

 VAR_4 = FUNC_0("boardvendor", VAR_3, sizeof(VAR_3));
 if (VAR_4 > 0) {
  VAR_5 = FUNC_1(FUNC_6(VAR_3), 0, &VAR_2->boardinfo.vendor);
  if (VAR_5)
   FUNC_3("Couldn't parse nvram board vendor entry with value \"%s\"\n",
    VAR_3);
 }
 if (!VAR_2->boardinfo.vendor)
  VAR_2->boardinfo.vendor = VAR_0;

 VAR_4 = FUNC_0("boardtype", VAR_3, sizeof(VAR_3));
 if (VAR_4 > 0) {
  VAR_5 = FUNC_1(FUNC_6(VAR_3), 0, &VAR_2->boardinfo.type);
  if (VAR_5)
   FUNC_3("Couldn't parse nvram board type entry with value \"%s\"\n",
    VAR_3);
 }

 FUNC_2(&VAR_2->sprom, 0, sizeof(struct ssb_sprom));
 FUNC_5(VAR_1, &VAR_2->sprom);

 if (FUNC_0("cardbus", VAR_3, sizeof(VAR_3)) >= 0)
  VAR_2->has_cardbus_slot = !!FUNC_4(VAR_3, ((void*)0), 10);

 return 0;
}
