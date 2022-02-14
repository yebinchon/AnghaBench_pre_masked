
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_port {int dummy; } ;
struct sky2_hw {int ports; int flags; int napi; struct net_device** dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct sky2_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int * VAR_4 ;
 int FUNC_4 (struct sky2_port*) ;
 int FUNC_5 (struct sky2_hw*,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct sky2_hw *VAR_5)
{
 u32 VAR_6 = VAR_3;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->ports; VAR_7++) {
  struct net_device *VAR_8 = VAR_5->dev[VAR_7];
  struct sky2_port *VAR_9 = FUNC_1(VAR_8);

  if (!FUNC_2(VAR_8))
   continue;

  FUNC_4(VAR_9);
  FUNC_6(VAR_8);
  VAR_6 |= VAR_4[VAR_7];
  FUNC_3(VAR_8);
 }

 if (VAR_5->flags & VAR_2) {
  FUNC_7(VAR_5, VAR_0, VAR_6);
  FUNC_5(VAR_5, VAR_0);
  FUNC_5(VAR_5, VAR_1);
  FUNC_0(&VAR_5->napi);
 }
}
