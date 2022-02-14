
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {int mdio_done; int napi; scalar_t__ hwp; scalar_t__ link; scalar_t__ work_rx; scalar_t__ work_tx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fec_enet_private*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct fec_enet_private *VAR_9 = FUNC_4(VAR_8);
 uint VAR_10;
 irqreturn_t VAR_11 = VAR_5;

 VAR_10 = FUNC_5(VAR_9->hwp + VAR_1);
 FUNC_6(VAR_10, VAR_9->hwp + VAR_1);
 FUNC_2(VAR_9, VAR_10);

 if ((VAR_9->work_tx || VAR_9->work_rx) && VAR_9->link) {
  VAR_11 = VAR_4;

  if (FUNC_3(&VAR_9->napi)) {

   FUNC_6(VAR_3, VAR_9->hwp + VAR_2);
   FUNC_0(&VAR_9->napi);
  }
 }

 if (VAR_10 & VAR_0) {
  VAR_11 = VAR_4;
  FUNC_1(&VAR_9->mdio_done);
 }
 return VAR_11;
}
