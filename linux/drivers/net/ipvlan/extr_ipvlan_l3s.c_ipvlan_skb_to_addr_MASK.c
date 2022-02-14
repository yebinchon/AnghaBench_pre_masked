
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ipvl_port {scalar_t__ mode; } ;
struct ipvl_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ipvl_addr* FUNC_0 (struct ipvl_port*,void*,int,int) ;
 void* FUNC_1 (struct ipvl_port*,struct sk_buff*,int*) ;
 struct ipvl_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static struct ipvl_addr *FUNC_4(struct sk_buff *VAR_1,
         struct net_device *VAR_2)
{
 struct ipvl_addr *VAR_3 = ((void*)0);
 struct ipvl_port *VAR_4;
 int VAR_5;
 void *VAR_6;

 if (!VAR_2 || !FUNC_3(VAR_2))
  goto out;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4 || VAR_4->mode != VAR_0)
  goto out;

 VAR_6 = FUNC_1(VAR_4, VAR_1, &VAR_5);
 if (!VAR_6)
  goto out;

 VAR_3 = FUNC_0(VAR_4, VAR_6, VAR_5, 1);
out:
 return VAR_3;
}
