
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct lan78xx_net {TYPE_1__* net; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct lan78xx_net *VAR_3,
        struct sk_buff *VAR_4,
        u32 VAR_5, u32 VAR_6)
{
 if ((VAR_3->net->features & VAR_1) &&
     (VAR_5 & VAR_2))
  FUNC_0(VAR_4, FUNC_1(VAR_0),
           (VAR_6 & 0xffff));
}
