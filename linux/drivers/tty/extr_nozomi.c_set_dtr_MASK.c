
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; } ;
struct TYPE_2__ {int DTR; } ;
struct port {int update_flow_control; TYPE_1__ ctrl_ul; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tty_struct const*) ;
 struct port* FUNC_3 (struct tty_struct const*) ;

__attribute__((used)) static void FUNC_4(const struct tty_struct *VAR_1, int VAR_2)
{
 struct port *VAR_3 = FUNC_3(VAR_1);

 FUNC_0("SETTING DTR index: %d, dtr: %d", VAR_1->index, VAR_2);

 VAR_3->ctrl_ul.DTR = VAR_2;
 VAR_3->update_flow_control = 1;
 FUNC_1(VAR_0, FUNC_2(VAR_1));
}
