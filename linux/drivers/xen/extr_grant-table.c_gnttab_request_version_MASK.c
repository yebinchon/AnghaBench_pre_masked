
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gnttab_set_version {int version; } ;
struct TYPE_4__ {int version; } ;


 int VAR_0 ;
 long FUNC_0 (int ,struct gnttab_set_version*,int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
 long VAR_5;
 struct gnttab_set_version VAR_6;

 if (FUNC_1())
  VAR_6.version = 2;
 else
  VAR_6.version = 1;


 if (VAR_4 >= 1 && VAR_4 <= 2)
  VAR_6.version = VAR_4;

 VAR_5 = FUNC_0(VAR_0, &VAR_6, 1);
 if (VAR_5 == 0 && VAR_6.version == 2)
  VAR_1 = &VAR_3;
 else
  VAR_1 = &VAR_2;
 FUNC_2("Grant tables using version %d layout\n",
  VAR_1->version);
}
