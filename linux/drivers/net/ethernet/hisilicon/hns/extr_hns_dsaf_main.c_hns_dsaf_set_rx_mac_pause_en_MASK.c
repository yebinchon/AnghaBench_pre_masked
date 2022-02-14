
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_device {int dev; int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dsaf_device*,scalar_t__,int ,int) ;

int FUNC_3(struct dsaf_device *VAR_3, int VAR_4,
     u32 VAR_5)
{
 if (FUNC_0(VAR_3->dsaf_ver)) {
  if (!VAR_5) {
   FUNC_1(VAR_3->dev, "dsafv1 can't close rx_pause!\n");
   return -VAR_2;
  }
 }

 FUNC_2(VAR_3, VAR_1 + VAR_4 * 4,
    VAR_0, !!VAR_5);

 return 0;
}
