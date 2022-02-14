
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct arcnet_local {int timer; int lock; struct net_device* dev; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int,char const*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct arcnet_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

struct net_device *FUNC_4(const char *VAR_3)
{
 struct net_device *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct arcnet_local),
      VAR_3 && *VAR_3 ? VAR_3 : "arc%d", VAR_0,
      VAR_1);
 if (VAR_4) {
  struct arcnet_local *VAR_5 = FUNC_1(VAR_4);

  VAR_5->dev = VAR_4;
  FUNC_2(&VAR_5->lock);
  FUNC_3(&VAR_5->timer, VAR_2, 0);
 }

 return VAR_4;
}
