
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sk_buff {scalar_t__ data; } ;
struct ar9170 {int tx_dropped; } ;
struct TYPE_2__ {int cookie; } ;
struct _carl9170_tx_superframe {TYPE_1__ s; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ar9170*,int ,int ) ;
 int * VAR_1 ;
 size_t FUNC_2 (struct ar9170*,struct sk_buff*) ;

void FUNC_3(struct ar9170 *VAR_2, struct sk_buff *VAR_3)
{
 struct _carl9170_tx_superframe *VAR_4;
 uint8_t VAR_5 = 0;

 VAR_2->tx_dropped++;

 VAR_4 = (void *)VAR_3->data;
 FUNC_0(VAR_0, VAR_5,
  VAR_1[FUNC_2(VAR_2, VAR_3)]);
 FUNC_1(VAR_2, VAR_4->s.cookie, VAR_5);
}
