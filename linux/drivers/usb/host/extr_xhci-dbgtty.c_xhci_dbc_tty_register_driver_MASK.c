
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct xhci_hcd {struct xhci_dbc* dbc; } ;
struct xhci_dbc {int port; } ;
struct TYPE_9__ {int c_cflag; int c_ispeed; int c_ospeed; } ;
struct TYPE_10__ {char* driver_name; char* name; int * driver_state; TYPE_1__ init_termios; int subtype; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 TYPE_1__ VAR_11 ;
 int FUNC_6 (struct xhci_hcd*,char*,int) ;

int FUNC_7(struct xhci_hcd *VAR_12)
{
 int VAR_13;
 struct xhci_dbc *VAR_14 = VAR_12->dbc;

 VAR_9 = FUNC_3(1, VAR_7 |
       VAR_6);
 if (FUNC_0(VAR_9)) {
  VAR_13 = FUNC_1(VAR_9);
  VAR_9 = ((void*)0);
  return VAR_13;
 }

 VAR_9->driver_name = "dbc_serial";
 VAR_9->name = "ttyDBC";

 VAR_9->type = VAR_8;
 VAR_9->subtype = VAR_5;
 VAR_9->init_termios = VAR_11;
 VAR_9->init_termios.c_cflag =
   VAR_0 | VAR_3 | VAR_2 | VAR_4 | VAR_1;
 VAR_9->init_termios.c_ispeed = 9600;
 VAR_9->init_termios.c_ospeed = 9600;
 VAR_9->driver_state = &VAR_14->port;

 FUNC_5(VAR_9, &VAR_10);

 VAR_13 = FUNC_4(VAR_9);
 if (VAR_13) {
  FUNC_6(VAR_12,
    "can't register dbc tty driver, err %d\n", VAR_13);
  FUNC_2(VAR_9);
  VAR_9 = ((void*)0);
 }

 return VAR_13;
}
