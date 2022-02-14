
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
 int FUNC_0 (struct spi_device*,int*,int,int*,int) ;
 struct spi_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 VAR_2)
{
 struct spi_device *VAR_3 = FUNC_1(VAR_1->dev.parent);
 u8 VAR_4[3] = { VAR_0, VAR_2 >> 8, VAR_2 & 0xff };
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, sizeof(VAR_4), &VAR_5, 1);

 return VAR_6 ? VAR_6 : VAR_5;
}
