
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gb_uart_set_break_request {int state; } ;
struct gb_tty {int connection; TYPE_1__* gbphy_dev; } ;
typedef int request ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,struct gb_uart_set_break_request*,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct gb_tty *VAR_2, u8 VAR_3)
{
 struct gb_uart_set_break_request VAR_4;

 if ((VAR_3 != 0) && (VAR_3 != 1)) {
  FUNC_0(&VAR_2->gbphy_dev->dev,
   "invalid break state of %d\n", VAR_3);
  return -VAR_0;
 }

 VAR_4.state = VAR_3;
 return FUNC_1(VAR_2->connection, VAR_1,
     &VAR_4, sizeof(VAR_4), ((void*)0), 0);
}
