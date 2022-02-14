
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct sun4ican_priv {scalar_t__ base; TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct sun4ican_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct sun4ican_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_3->can.state = VAR_0;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_2, "could not enter reset mode\n");
  return VAR_4;
 }


 FUNC_3(0, VAR_3->base + VAR_1);

 return 0;
}
