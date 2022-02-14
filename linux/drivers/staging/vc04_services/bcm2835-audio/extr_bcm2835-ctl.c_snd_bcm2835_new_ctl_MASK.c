
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm2835_chip {TYPE_1__* card; } ;
struct TYPE_2__ {int mixername; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcm2835_chip*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct bcm2835_chip *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2->card->mixername, "Broadcom Mixer");
 VAR_3 = FUNC_1(VAR_2, FUNC_0(VAR_0), VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 return FUNC_1(VAR_2, FUNC_0(VAR_1),
      VAR_1);
}
