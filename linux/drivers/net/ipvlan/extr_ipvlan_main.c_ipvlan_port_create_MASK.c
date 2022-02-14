
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipvl_port {int dev_id_start; int ida; int wq; int backlog; int * hlhead; int ipvlans; int mode; struct net_device* dev; int pnet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct ipvl_port*) ;
 struct ipvl_port* FUNC_6 (int,int ) ;
 int FUNC_7 (struct net_device*,int ,struct ipvl_port*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6)
{
 struct ipvl_port *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_6(sizeof(struct ipvl_port), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_9(&VAR_7->pnet, FUNC_3(VAR_6));
 VAR_7->dev = VAR_6;
 VAR_7->mode = VAR_3;
 FUNC_1(&VAR_7->ipvlans);
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  FUNC_0(&VAR_7->hlhead[VAR_9]);

 FUNC_8(&VAR_7->backlog);
 FUNC_2(&VAR_7->wq, VAR_5);
 FUNC_4(&VAR_7->ida);
 VAR_7->dev_id_start = 1;

 VAR_8 = FUNC_7(VAR_6, VAR_4, VAR_7);
 if (VAR_8)
  goto err;

 return 0;

err:
 FUNC_5(VAR_7);
 return VAR_8;
}
