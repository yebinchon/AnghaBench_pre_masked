
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device*,int*,int,int *,int ) ;
 struct spi_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 VAR_2, u8 VAR_3)
{
 struct spi_device *VAR_4 = FUNC_1(VAR_1->dev.parent);
 u8 VAR_5[5] = { VAR_2 >> 8, VAR_2 & 0xff, VAR_0, 1, VAR_3 };

 return FUNC_0(VAR_4, VAR_5, sizeof(VAR_5), ((void*)0), 0);
}
