
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ndesc; } ;
struct ave_private {scalar_t__ base; TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 struct ave_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_8)
{
 struct ave_private *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10;


 VAR_10 = FUNC_3(VAR_9->base + VAR_6);
 FUNC_5(VAR_10 & (~VAR_7), VAR_9->base + VAR_6);


 FUNC_0(VAR_8, VAR_1);


 FUNC_1(VAR_8, VAR_9->rx.ndesc);


 FUNC_5(VAR_5, VAR_9->base + VAR_4);
 FUNC_4(50);


 FUNC_5(0, VAR_9->base + VAR_4);
 FUNC_4(20);


 FUNC_5(VAR_3, VAR_9->base + VAR_2);


 FUNC_0(VAR_8, VAR_0);


 FUNC_5(VAR_10, VAR_9->base + VAR_6);
}
