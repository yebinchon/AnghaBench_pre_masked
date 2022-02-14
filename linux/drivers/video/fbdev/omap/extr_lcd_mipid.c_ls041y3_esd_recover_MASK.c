
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipid_device {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mipid_device*,int) ;

__attribute__((used)) static void FUNC_2(struct mipid_device *VAR_0)
{
 FUNC_0(&VAR_0->spi->dev, "performing LCD ESD recovery\n");
 FUNC_1(VAR_0, 1);
 FUNC_1(VAR_0, 0);
}
