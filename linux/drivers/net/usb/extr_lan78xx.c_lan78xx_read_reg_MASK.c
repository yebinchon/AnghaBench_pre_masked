
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan78xx_net {int net; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int ,int) ;
 int FUNC_5 (int ,int ,int ,int,int ,int ,int *,int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct lan78xx_net *VAR_7, u32 VAR_8, u32 *VAR_9)
{
 u32 *VAR_10 = FUNC_1(sizeof(u32), VAR_1);
 int VAR_11;

 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_7->udev, FUNC_6(VAR_7->udev, 0),
         VAR_6,
         VAR_3 | VAR_5 | VAR_4,
         0, VAR_8, VAR_10, 4, VAR_2);
 if (FUNC_3(VAR_11 >= 0)) {
  FUNC_2(VAR_10);
  *VAR_9 = *VAR_10;
 } else {
  FUNC_4(VAR_7->net,
       "Failed to read register index 0x%08x. ret = %d",
       VAR_8, VAR_11);
 }

 FUNC_0(VAR_10);

 return VAR_11;
}
