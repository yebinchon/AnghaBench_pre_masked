
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ei_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ txing; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 struct ei_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ei_device*,int ,struct net_device*,char*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct ei_device *VAR_3 = FUNC_0(VAR_2);

 VAR_0.txing = 0;
 FUNC_1(VAR_3, VAR_1, VAR_2, "reset not supported\n");
}
