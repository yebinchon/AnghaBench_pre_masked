
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvpp2_port {int nrxqs; TYPE_2__* priv; TYPE_1__** rxqs; int id; scalar_t__ base; } ;
struct TYPE_5__ {scalar_t__ hw_version; int tclk; } ;
struct TYPE_4__ {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 int VAR_16 ;
 int FUNC_6 (struct mvpp2_port*) ;
 int FUNC_7 (struct mvpp2_port*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct mvpp2_port *VAR_17)
{
 int VAR_18, VAR_19, VAR_20, VAR_21;

 if (VAR_17->priv->hw_version == VAR_0) {

  VAR_19 = FUNC_10(VAR_17->base + VAR_1);
  VAR_19 &= ~VAR_2;

  VAR_19 |= FUNC_0(64 - 4 - 2);
  FUNC_11(VAR_19, VAR_17->base + VAR_1);
 }


 VAR_18 = FUNC_6(VAR_17);
 FUNC_9(VAR_17->priv, VAR_12,
      VAR_18);
 FUNC_9(VAR_17->priv, VAR_9, 0);


 FUNC_9(VAR_17->priv, VAR_10, 0);


 for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++)
  FUNC_9(VAR_17->priv,
       FUNC_5(VAR_20), 0);




 FUNC_9(VAR_17->priv, VAR_11,
      VAR_17->priv->tclk / VAR_16);
 VAR_19 = FUNC_8(VAR_17->priv, VAR_13);
 VAR_19 &= ~VAR_7;
 VAR_19 |= FUNC_4(1);
 VAR_19 |= VAR_8;
 FUNC_9(VAR_17->priv, VAR_13, VAR_19);
 VAR_19 = VAR_15;
 FUNC_9(VAR_17->priv, VAR_14, VAR_19);


 FUNC_9(VAR_17->priv, FUNC_2(VAR_17->id),
      VAR_4 |
      FUNC_3(256));


 for (VAR_21 = 0; VAR_21 < VAR_17->nrxqs; VAR_21++) {
  VAR_20 = VAR_17->rxqs[VAR_21]->id;
  VAR_19 = FUNC_8(VAR_17->priv, FUNC_1(VAR_20));
  VAR_19 |= VAR_6 |
      VAR_5;
  FUNC_9(VAR_17->priv, FUNC_1(VAR_20), VAR_19);
 }


 FUNC_7(VAR_17);
}
