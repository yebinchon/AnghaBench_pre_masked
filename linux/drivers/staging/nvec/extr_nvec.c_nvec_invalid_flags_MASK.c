
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_chip {scalar_t__ state; int dev; } ;


 int FUNC_0 (int ,char*,unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nvec_chip *VAR_0, unsigned int VAR_1,
          bool VAR_2)
{
 FUNC_0(VAR_0->dev, "unexpected status flags 0x%02x during state %i\n",
  VAR_1, VAR_0->state);
 if (VAR_2)
  VAR_0->state = 0;
}
