
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct pcmcia_device {TYPE_1__** resource; int dev; struct net_device* priv; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pcmcia_device*) ;
 scalar_t__ FUNC_3 (struct pcmcia_device*,int,int ,struct net_device*) ;
 int VAR_6 ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_7, u_short VAR_8, u_short VAR_9)
{
    struct net_device *VAR_10 = VAR_7->priv;
    int VAR_11;


    if (FUNC_3(VAR_7, 0x90, VAR_6, VAR_10))
     return -1;

    if (((VAR_8 == VAR_0) &&
  (VAR_9 == VAR_4)) ||
 ((VAR_8 == VAR_1) &&
  (VAR_9 == VAR_5))) {
 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11)
  return VAR_11;
    } else if (VAR_8 == VAR_0) {

 FUNC_4(0x300, VAR_7->resource[0]->start + VAR_2);

 FUNC_4(0x300, VAR_7->resource[0]->start + VAR_3);
 FUNC_0(&VAR_7->dev, "AUI/PWR: %4.4x RESET/ISR: %4.4x\n",
       FUNC_1(VAR_7->resource[0]->start + VAR_2),
       FUNC_1(VAR_7->resource[0]->start + VAR_3));
    }
    return 0;
}
