
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pwr_op_mode; } ;
struct ucsi_connector {int port; TYPE_1__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ucsi_connector *VAR_4)
{
 switch (VAR_4->status.pwr_op_mode) {
 case 130:
  FUNC_0(VAR_4->port, VAR_2);
  break;
 case 129:
  FUNC_0(VAR_4->port, VAR_0);
  break;
 case 128:
  FUNC_0(VAR_4->port, VAR_1);
  break;
 default:
  FUNC_0(VAR_4->port, VAR_3);
  break;
 }
}
