
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsaf_device {int dev; int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dsaf_device*,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_3(struct dsaf_device *VAR_3,
       int VAR_4, int VAR_5, int VAR_6)
{
 if (FUNC_0(VAR_3->dsaf_ver)) {
  if (!VAR_5 || !VAR_6)
   FUNC_1(VAR_3->dev, "dsaf v1 can not close pfc!\n");

  return;
 }

 FUNC_2(VAR_3, VAR_0 + VAR_4 * 4,
    VAR_1, !!VAR_6);
 FUNC_2(VAR_3, VAR_0 + VAR_4 * 4,
    VAR_2, !!VAR_5);
}
