
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct msi2500_dev {int dev; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,int,int,int,int,int *,int ) ;
 int FUNC_2 (int ,int ,int,int,int,int,int *,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct msi2500_dev *VAR_2, u8 VAR_3, u32 VAR_4)
{
 int VAR_5;
 u8 VAR_6 = VAR_3;
 u8 VAR_7 = VAR_0 | VAR_1;
 u16 VAR_8 = (VAR_4 >> 0) & 0xffff;
 u16 VAR_9 = (VAR_4 >> 16) & 0xffff;

 FUNC_1(VAR_2->dev, VAR_6, VAR_7,
        VAR_8, VAR_9, ((void*)0), 0);
 VAR_5 = FUNC_2(VAR_2->udev, FUNC_3(VAR_2->udev, 0), VAR_6,
         VAR_7, VAR_8, VAR_9, ((void*)0), 0, 2000);
 if (VAR_5)
  FUNC_0(VAR_2->dev, "failed %d, cmd %02x, data %04x\n",
   VAR_5, VAR_3, VAR_4);

 return VAR_5;
}
