
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; int function; } ;
struct scc_channel {int lock; int ctrl; TYPE_1__ tx_wdog; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct scc_channel*) ;
 int FUNC_5 (struct scc_channel*,int ) ;
 int VAR_6 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct scc_channel*,int ,unsigned char) ;

__attribute__((used)) static void
FUNC_9(struct scc_channel *VAR_7, int VAR_8, unsigned char VAR_9)
{
 unsigned long VAR_10;

 FUNC_6(&VAR_7->lock, VAR_10);
 FUNC_3(VAR_7->dev);
 FUNC_4(VAR_7);

 FUNC_2(&VAR_7->tx_wdog);

 VAR_7->tx_wdog.function = VAR_6;
 VAR_7->tx_wdog.expires = VAR_5 + VAR_0*VAR_8;
 FUNC_1(&VAR_7->tx_wdog);


 FUNC_8(VAR_7, VAR_1, 0);
 FUNC_8(VAR_7, VAR_2, VAR_9);






 FUNC_0(VAR_7->ctrl,VAR_3);
 FUNC_0(VAR_7->ctrl,VAR_3);

 FUNC_5(VAR_7, VAR_4);
 FUNC_7(&VAR_7->lock, VAR_10);
}
