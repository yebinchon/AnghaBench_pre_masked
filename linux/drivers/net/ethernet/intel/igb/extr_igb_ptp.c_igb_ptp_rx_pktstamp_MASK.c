
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct igb_q_vector {struct igb_adapter* adapter; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_2__ mac; } ;
struct igb_adapter {int link_speed; TYPE_1__ hw; } ;
typedef int __le64 ;
struct TYPE_7__ {int hwtstamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (struct igb_adapter*,TYPE_3__*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct igb_q_vector *VAR_4, void *VAR_5,
    struct sk_buff *VAR_6)
{
 __le64 *VAR_7 = (__le64 *)VAR_5;
 struct igb_adapter *VAR_8 = VAR_4->adapter;
 int VAR_9 = 0;





 FUNC_0(VAR_8, FUNC_3(VAR_6),
       FUNC_2(VAR_7[1]));


 if (VAR_8->hw.mac.type == VAR_3) {
  switch (VAR_8->link_speed) {
  case 130:
   VAR_9 = VAR_0;
   break;
  case 129:
   VAR_9 = VAR_1;
   break;
  case 128:
   VAR_9 = VAR_2;
   break;
  }
 }
 FUNC_3(VAR_6)->hwtstamp =
  FUNC_1(FUNC_3(VAR_6)->hwtstamp, VAR_9);
}
