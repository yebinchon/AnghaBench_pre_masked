
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int c_cflag; } ;
struct TYPE_9__ {char* driver_name; int flags; TYPE_1__ init_termios; int subtype; int type; scalar_t__ minor_start; scalar_t__ major; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 TYPE_1__ VAR_14 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_15 = 0;

 VAR_13 = FUNC_3(VAR_6, 0);
 if (FUNC_0(VAR_13)) {
  FUNC_1("Can not allocate tty driver\n");
  VAR_15 = -VAR_4;
  goto fail_unregister_dev;
 }

 VAR_13->driver_name = "gb";
 VAR_13->name = VAR_5;
 VAR_13->major = 0;
 VAR_13->minor_start = 0;
 VAR_13->type = VAR_11;
 VAR_13->subtype = VAR_8;
 VAR_13->flags = VAR_10 | VAR_9;
 VAR_13->init_termios = VAR_14;
 VAR_13->init_termios.c_cflag = VAR_0 | VAR_3 |
  VAR_2 | VAR_7 | VAR_1;
 FUNC_5(VAR_13, &VAR_12);

 VAR_15 = FUNC_4(VAR_13);
 if (VAR_15) {
  FUNC_1("Can not register tty driver: %d\n", VAR_15);
  goto fail_put_gb_tty;
 }

 return 0;

fail_put_gb_tty:
 FUNC_2(VAR_13);
fail_unregister_dev:
 return VAR_15;
}
