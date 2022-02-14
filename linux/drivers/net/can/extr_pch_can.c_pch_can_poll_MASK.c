
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pch_can_priv {TYPE_1__* regs; } ;
struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct TYPE_2__ {int stat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct napi_struct*) ;
 struct pch_can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct pch_can_priv*) ;
 scalar_t__ FUNC_6 (struct net_device*,scalar_t__,int) ;
 int FUNC_7 (struct pch_can_priv*,int ) ;
 int FUNC_8 (struct net_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct napi_struct *VAR_10, int VAR_11)
{
 struct net_device *VAR_12 = VAR_10->dev;
 struct pch_can_priv *VAR_13 = FUNC_2(VAR_12);
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16 = VAR_11;

 VAR_14 = FUNC_5(VAR_13);
 if (!VAR_14)
  goto end;

 if (VAR_14 == VAR_6) {
  VAR_15 = FUNC_0(&VAR_13->regs->stat);

  if ((VAR_15 & (VAR_0 | VAR_2)) &&
     ((VAR_15 & VAR_2) != VAR_2)) {
   FUNC_4(VAR_12, VAR_15);
   VAR_11--;
  }

  if (VAR_15 & (VAR_9 | VAR_5))
   FUNC_3(&VAR_13->regs->stat,
       VAR_15 & (VAR_9 | VAR_5));

  VAR_14 = FUNC_5(VAR_13);
 }

 if (VAR_11 == 0)
  goto end;

 if ((VAR_14 >= VAR_4) && (VAR_14 <= VAR_3)) {
  VAR_11 -= FUNC_6(VAR_12, VAR_14, VAR_11);
 } else if ((VAR_14 >= VAR_8) &&
     (VAR_14 <= VAR_7)) {

  FUNC_8(VAR_12, VAR_14);
 }

end:
 FUNC_1(VAR_10);
 FUNC_7(VAR_13, VAR_1);

 return VAR_16 - VAR_11;
}
