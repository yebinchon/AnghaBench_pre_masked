
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int init_termios; int type; int minor_start; int name; int driver_name; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_10;

 FUNC_3("VCC: %s\n", VAR_9);

 VAR_7 = FUNC_5(VAR_1, VAR_3);
 if (FUNC_0(VAR_7)) {
  FUNC_2("VCC: TTY driver alloc failed\n");
  return FUNC_1(VAR_7);
 }

 VAR_7->driver_name = VAR_5;
 VAR_7->name = VAR_4;

 VAR_7->minor_start = VAR_2;
 VAR_7->type = VAR_0;
 VAR_7->init_termios = VAR_8;

 FUNC_7(VAR_7, &VAR_6);

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10) {
  FUNC_2("VCC: TTY driver registration failed\n");
  FUNC_4(VAR_7);
  VAR_7 = ((void*)0);
  return VAR_10;
 }

 FUNC_8("VCC: TTY driver registered\n");

 return 0;
}
