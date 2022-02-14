
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int napi_tx; int napi_rx; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,struct rocker_port*) ;
 int FUNC_1 (int *) ;
 struct rocker_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct rocker_port*) ;
 int FUNC_5 (struct rocker_port*) ;
 int FUNC_6 (struct rocker_port*) ;
 int FUNC_7 (struct rocker_port*,int) ;
 int FUNC_8 (struct rocker_port*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct rocker_port *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0);
 FUNC_7(VAR_1, 0);
 FUNC_1(&VAR_1->napi_rx);
 FUNC_1(&VAR_1->napi_tx);
 FUNC_8(VAR_1);
 FUNC_0(FUNC_4(VAR_1), VAR_1);
 FUNC_0(FUNC_5(VAR_1), VAR_1);
 FUNC_6(VAR_1);

 return 0;
}
