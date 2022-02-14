
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; } ;
struct ei_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ txing; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ei_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ei_device*,int ,struct net_device*,char*,int ) ;
 scalar_t__ FUNC_3 (struct ei_device*) ;
 unsigned char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3)
{
 unsigned char *VAR_4 = FUNC_4(FUNC_0(VAR_3->irq));
 struct ei_device *VAR_5 = FUNC_1(VAR_3);

 FUNC_2(VAR_5, VAR_1, VAR_3, "Need to reset the NS8390 t=%lu...",
     VAR_2);
 VAR_0.txing = 0;
 VAR_4[0xC0000] = 0;
 if (FUNC_3(VAR_5))
  FUNC_5("reset complete\n");
}
