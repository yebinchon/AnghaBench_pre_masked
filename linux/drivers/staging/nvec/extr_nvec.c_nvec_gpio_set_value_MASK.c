
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_chip {int gpiod; int dev; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct nvec_chip *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->dev, "GPIO changed from %u to %u\n",
  FUNC_1(VAR_0->gpiod), VAR_1);
 FUNC_2(VAR_0->gpiod, VAR_1);
}
