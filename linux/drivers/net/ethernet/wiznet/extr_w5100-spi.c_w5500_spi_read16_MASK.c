
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
typedef int data ;
typedef int cmd ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct spi_device*,int*,int,int *,int) ;
 struct spi_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, u32 VAR_1)
{
 struct spi_device *VAR_2 = FUNC_3(VAR_0->dev.parent);
 u8 VAR_3[3] = {
  VAR_1 >> 8,
  VAR_1,
  FUNC_0(VAR_1)
 };
 __be16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, sizeof(VAR_3), &VAR_4, sizeof(VAR_4));

 return VAR_5 ? VAR_5 : FUNC_1(VAR_4);
}
