
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct redrat3_dev {int dev; int udev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ,int,int ,int ,int *,int,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static u32 FUNC_9(struct redrat3_dev *VAR_7)
{
 __be32 *VAR_8;
 u32 VAR_9 = FUNC_0(150);
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = sizeof(*VAR_8);
 VAR_8 = FUNC_5(VAR_10, VAR_0);
 if (!VAR_8)
  return VAR_9;

 VAR_12 = FUNC_8(VAR_7->udev, 0);
 VAR_11 = FUNC_7(VAR_7->udev, VAR_12, VAR_2,
         VAR_6 | VAR_5 | VAR_4,
         VAR_3, 0, VAR_8, VAR_10, VAR_1 * 5);
 if (VAR_11 != VAR_10)
  FUNC_3(VAR_7->dev, "Failed to read timeout from hardware\n");
 else {
  VAR_9 = FUNC_6(FUNC_1(VAR_8));

  FUNC_2(VAR_7->dev, "Got timeout of %d ms\n", VAR_9 / 1000);
 }

 FUNC_4(VAR_8);

 return VAR_9;
}
