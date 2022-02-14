
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int intf; } ;
struct net_device {int dummy; } ;


 struct r8152* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct r8152*,int ,struct net_device*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct r8152 *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0, VAR_1, "Tx timeout\n");

 FUNC_2(VAR_2->intf);
}
