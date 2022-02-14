
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct b53_srab_priv {int mux_config; struct b53_srab_port_priv* port_intrs; } ;
struct b53_srab_port_priv {scalar_t__ mode; } ;
struct b53_device {TYPE_1__* pdata; struct b53_srab_priv* priv; } ;
struct TYPE_2__ {scalar_t__ chip_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;


 int VAR_2 ;



 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct b53_device*,unsigned int) ;
 int FUNC_2 (int *,char*,unsigned int,int ) ;
 int FUNC_3 (struct platform_device*,int) ;
 int FUNC_4 (scalar_t__) ;
 struct b53_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_9)
{
 struct b53_device *VAR_10 = FUNC_5(VAR_9);
 struct b53_srab_priv *VAR_11 = VAR_10->priv;
 struct b53_srab_port_priv *VAR_12;
 unsigned int VAR_13;
 u32 VAR_14, VAR_15 = 0;
 int VAR_16;

 if (VAR_10->pdata && VAR_10->pdata->chip_id != VAR_1)
  return;

 VAR_11->mux_config = FUNC_3(VAR_9, 1);
 if (FUNC_0(VAR_11->mux_config))
  return;




 for (VAR_13 = 5; VAR_13 > 3; VAR_13--, VAR_15 += 4) {
  VAR_12 = &VAR_11->port_intrs[VAR_13];

  VAR_14 = FUNC_6(VAR_11->mux_config + VAR_0 + VAR_15);
  switch (VAR_14 & VAR_2) {
  case 128:
   VAR_12->mode = VAR_8;
   VAR_16 = FUNC_1(VAR_10, VAR_13);
   if (VAR_16)
    continue;
   break;
  case 130:
   VAR_12->mode = VAR_5;
   break;
  case 132:
   VAR_12->mode = VAR_3;
   break;
  case 129:
   VAR_12->mode = VAR_7;
   break;
  case 131:
   VAR_12->mode = VAR_4;
   break;
  default:
   VAR_12->mode = VAR_6;
   break;
  }

  if (VAR_12->mode != VAR_6)
   FUNC_2(&VAR_9->dev, "Port %d mode: %s\n",
     VAR_13, FUNC_4(VAR_12->mode));
 }
}
