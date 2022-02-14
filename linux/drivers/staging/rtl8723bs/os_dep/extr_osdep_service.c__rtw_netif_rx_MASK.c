
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
typedef int _nic_hdl ;


 int FUNC_0 (struct sk_buff*) ;

inline int FUNC_1(_nic_hdl VAR_0, struct sk_buff *VAR_1)
{
 VAR_1->dev = VAR_0;
 return FUNC_0(VAR_1);
}
