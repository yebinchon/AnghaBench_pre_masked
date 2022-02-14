
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethsw_port_priv {int idx; } ;


 int VAR_0 ;
 struct ethsw_port_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, char *VAR_2,
         size_t VAR_3)
{
 struct ethsw_port_priv *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, "p%d", VAR_4->idx);
 if (VAR_5 >= VAR_3)
  return -VAR_0;

 return 0;
}
