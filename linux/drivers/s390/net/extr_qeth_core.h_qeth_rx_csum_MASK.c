
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int ip_summed; } ;
struct qeth_card {TYPE_1__* dev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_1(struct qeth_card *VAR_5, struct sk_buff *VAR_6,
    u8 VAR_7)
{
 if ((VAR_5->dev->features & VAR_2) &&
     (VAR_7 & VAR_3)) {
  VAR_6->ip_summed = VAR_1;
  FUNC_0(VAR_5, VAR_4);
 } else {
  VAR_6->ip_summed = VAR_0;
 }
}
