
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct efx_nic {int port_num; } ;


 int VAR_0 ;
 struct efx_nic* FUNC_0 (struct net_device*) ;
 size_t FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
      char *VAR_2, size_t VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_2, VAR_3, "p%u", VAR_4->port_num) >= VAR_3)
  return -VAR_0;
 return 0;
}
