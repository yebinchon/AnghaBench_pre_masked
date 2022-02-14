
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tps6507x_pmic {int io_lock; TYPE_1__* mfd; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tps6507x_pmic*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tps6507x_pmic *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->io_lock);

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_0(VAR_0->mfd->dev, "Write for reg 0x%x failed\n", VAR_1);

 FUNC_2(&VAR_0->io_lock);
 return VAR_3;
}
