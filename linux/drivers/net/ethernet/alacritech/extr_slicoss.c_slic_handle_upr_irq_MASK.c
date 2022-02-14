
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_upr {scalar_t__ type; } ;
struct slic_device {int netdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct slic_upr*) ;
 int FUNC_1 (int ,char*) ;
 struct slic_upr* FUNC_2 (struct slic_device*) ;
 int FUNC_3 (struct slic_device*) ;
 int FUNC_4 (struct slic_device*,struct slic_upr*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct slic_device *VAR_2, u32 VAR_3)
{
 struct slic_upr *VAR_4;


 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4) {
  FUNC_1(VAR_2->netdev, "no upr found on list\n");
  return;
 }

 if (VAR_4->type == VAR_1) {
  if (FUNC_5(VAR_3 & VAR_0)) {

   FUNC_4(VAR_2, VAR_4);
   return;
  }
  FUNC_3(VAR_2);
 }
 FUNC_0(VAR_4);
}
