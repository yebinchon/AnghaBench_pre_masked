
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phonet_port {int lock; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ) ;
 int VAR_1 ;
 struct net_device* FUNC_1 (int,char*,int ,int ) ;
 struct phonet_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

struct net_device *FUNC_5(void)
{
 struct net_device *VAR_3;
 struct phonet_port *VAR_4;


 VAR_3 = FUNC_1(sizeof(*VAR_4), "upnlink%d", VAR_1,
      VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(VAR_3);
 FUNC_4(&VAR_4->lock);
 FUNC_3(VAR_3);

 return VAR_3;
}
