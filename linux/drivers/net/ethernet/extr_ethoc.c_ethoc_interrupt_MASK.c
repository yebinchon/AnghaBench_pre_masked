
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_dropped; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct ethoc {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ethoc*,int) ;
 int FUNC_2 (struct ethoc*,int) ;
 int FUNC_3 (struct ethoc*,int ) ;
 int FUNC_4 (int *) ;
 struct ethoc* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = VAR_8;
 struct ethoc *VAR_10 = FUNC_5(VAR_9);
 u32 VAR_11;
 u32 VAR_12;
 VAR_12 = FUNC_3(VAR_10, VAR_0);
 VAR_11 = FUNC_3(VAR_10, VAR_4);
 VAR_11 &= VAR_12;

 if (FUNC_6(VAR_11 == 0))
  return VAR_6;

 FUNC_1(VAR_10, VAR_11);


 if (VAR_11 & VAR_1) {
  FUNC_0(&VAR_9->dev, "packet dropped\n");
  VAR_9->stats.rx_dropped++;
 }


 if (VAR_11 & (VAR_3 | VAR_2)) {
  FUNC_2(VAR_10, VAR_3 | VAR_2);
  FUNC_4(&VAR_10->napi);
 }

 return VAR_5;
}
