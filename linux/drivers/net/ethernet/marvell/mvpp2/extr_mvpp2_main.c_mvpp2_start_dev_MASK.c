
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink_link_state {int interface; } ;
struct mvpp2_port {int nqvecs; int dev; int phy_interface; int phylink_config; scalar_t__ phylink; TYPE_2__* priv; TYPE_1__* qvecs; } ;
struct TYPE_4__ {scalar_t__ hw_version; } ;
struct TYPE_3__ {int napi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mvpp2_port*) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (int *,int ,struct phylink_link_state*) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (struct mvpp2_port*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct mvpp2_port *VAR_2)
{
 int VAR_3;

 FUNC_4(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2->nqvecs; VAR_3++)
  FUNC_5(&VAR_2->qvecs[VAR_3].napi);


 FUNC_1(VAR_2);

 if (VAR_2->priv->hw_version == VAR_1)
  FUNC_0(VAR_2);

 if (VAR_2->phylink) {
  FUNC_7(VAR_2->phylink);
 } else {




  struct phylink_link_state VAR_4 = {
   .interface = VAR_2->phy_interface,
  };
  FUNC_2(&VAR_2->phylink_config, VAR_0, &VAR_4);
  FUNC_3(&VAR_2->phylink_config, VAR_0,
      VAR_2->phy_interface, ((void*)0));
 }

 FUNC_6(VAR_2->dev);
}
