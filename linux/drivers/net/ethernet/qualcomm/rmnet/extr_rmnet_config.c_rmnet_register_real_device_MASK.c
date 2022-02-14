
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmnet_port {int * muxed_ep; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rmnet_port*) ;
 struct rmnet_port* FUNC_4 (int,int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*,int ,struct rmnet_port*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5)
{
 struct rmnet_port *VAR_6;
 int VAR_7, VAR_8;

 FUNC_0();

 if (FUNC_7(VAR_5))
  return 0;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->dev = VAR_5;
 VAR_7 = FUNC_6(VAR_5, VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_6);
  return -VAR_0;
 }


 FUNC_2(VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_1(&VAR_6->muxed_ep[VAR_8]);

 FUNC_5(VAR_5, "registered with rmnet\n");
 return 0;
}
