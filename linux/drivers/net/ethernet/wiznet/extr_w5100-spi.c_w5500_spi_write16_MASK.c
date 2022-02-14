
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
typedef int cmd ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct spi_device*,int*,int,int *,int ) ;
 struct spi_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, u32 VAR_1, u16 VAR_2)
{
 struct spi_device *VAR_3 = FUNC_2(VAR_0->dev.parent);
 u8 VAR_4[5] = {
  VAR_1 >> 8,
  VAR_1,
  FUNC_0(VAR_1),
  VAR_2 >> 8,
  VAR_2
 };

 return FUNC_1(VAR_3, VAR_4, sizeof(VAR_4), ((void*)0), 0);
}
