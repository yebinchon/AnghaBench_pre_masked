
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct slic_device {TYPE_1__* netdev; } ;
struct TYPE_2__ {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct slic_device*) ;
 int FUNC_1 (struct slic_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct slic_device *VAR_4)
{
 u8 *VAR_5 = VAR_4->netdev->dev_addr;
 u32 VAR_6;

 VAR_6 = VAR_5[5] | VAR_5[4] << 8 | VAR_5[3] << 16 | VAR_5[2] << 24;

 FUNC_1(VAR_4, VAR_1, VAR_6);
 FUNC_1(VAR_4, VAR_3, VAR_6);

 VAR_6 = VAR_5[0] << 8 | VAR_5[1];

 FUNC_1(VAR_4, VAR_0, VAR_6);
 FUNC_1(VAR_4, VAR_2, VAR_6);
 FUNC_0(VAR_4);
}
