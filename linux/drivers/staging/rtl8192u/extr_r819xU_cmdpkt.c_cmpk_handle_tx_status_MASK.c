
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
typedef int cmpk_tx_status_t ;


 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (void*,void*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, u8 *VAR_1)
{
 cmpk_tx_status_t VAR_2;

 FUNC_1((void *)&VAR_2, (void *)VAR_1, sizeof(cmpk_tx_status_t));

 FUNC_0(VAR_0, &VAR_2);
}
