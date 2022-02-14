
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct r3964_info {int state; int rx_position; } ;


 int VAR_0 ;
 void* VAR_1 ;







 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct r3964_info*) ;
 struct r3964_info* FUNC_2 (int ,struct timer_list*,int ) ;
 struct r3964_info* VAR_2 ;
 int FUNC_3 (struct r3964_info*,int ) ;
 int FUNC_4 (struct r3964_info*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct r3964_info *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_3);

 switch (VAR_5->state) {
 case 133:
  FUNC_0("TX_REQUEST - timeout");
  FUNC_4(VAR_5);
  break;
 case 128:
  FUNC_3(VAR_5, VAR_0);
  FUNC_1(VAR_5);
  FUNC_4(VAR_5);
  break;
 case 129:
  FUNC_0("WAIT_FOR_TX_ACK - timeout");
  FUNC_4(VAR_5);
  break;
 case 131:
  FUNC_0("WAIT_FOR_RX_BUF - timeout");
  FUNC_3(VAR_5, VAR_0);
  FUNC_1(VAR_5);
  VAR_5->state = VAR_1;
  break;
 case 134:
  FUNC_0("RECEIVING - timeout after %d chars",
    VAR_5->rx_position);
  FUNC_3(VAR_5, VAR_0);
  FUNC_1(VAR_5);
  VAR_5->state = VAR_1;
  break;
 case 130:
  FUNC_0("WAIT_FOR_RX_REPEAT - timeout");
  VAR_5->state = VAR_1;
  break;
 case 132:
  FUNC_0("WAIT_FOR_BCC - timeout");
  FUNC_3(VAR_5, VAR_0);
  FUNC_1(VAR_5);
  VAR_5->state = VAR_1;
  break;
 }
}
