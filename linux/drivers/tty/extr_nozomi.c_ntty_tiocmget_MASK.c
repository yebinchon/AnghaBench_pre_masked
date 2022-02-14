
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct port* driver_data; } ;
struct ctrl_ul {scalar_t__ DTR; scalar_t__ RTS; } ;
struct ctrl_dl {scalar_t__ CTS; scalar_t__ DSR; scalar_t__ RI; scalar_t__ DCD; } ;
struct port {struct ctrl_ul ctrl_ul; struct ctrl_dl ctrl_dl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_6)
{
 const struct port *VAR_7 = VAR_6->driver_data;
 const struct ctrl_dl *VAR_8 = &VAR_7->ctrl_dl;
 const struct ctrl_ul *VAR_9 = &VAR_7->ctrl_ul;



 return (VAR_9->RTS ? VAR_5 : 0)
  | (VAR_9->DTR ? VAR_3 : 0)
  | (VAR_8->DCD ? VAR_0 : 0)
  | (VAR_8->RI ? VAR_4 : 0)
  | (VAR_8->DSR ? VAR_2 : 0)
  | (VAR_8->CTS ? VAR_1 : 0);
}
