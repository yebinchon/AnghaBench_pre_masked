
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ntb_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct ntb_dev*) ;
 int FUNC_4 (struct ntb_dev*) ;
 int FUNC_5 (struct ntb_dev*) ;
 int FUNC_6 (struct ntb_dev*) ;
 int FUNC_7 (struct ntb_dev*) ;
 scalar_t__ FUNC_8 (struct ntb_dev*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct ntb_dev *VAR_2)
{
 u64 VAR_3;

 if (FUNC_3(VAR_2)) {
  FUNC_1(&VAR_2->dev, "Doorbell is unsafe\n");
  if (!VAR_1)
   return -VAR_0;
 }

 if (FUNC_8(VAR_2)) {
  FUNC_1(&VAR_2->dev, "Scratchpad is unsafe\n");
  if (!VAR_1)
   return -VAR_0;
 }

 VAR_3 = FUNC_0(FUNC_6(VAR_2), 0);
 if ((FUNC_4(VAR_2) & VAR_3) != VAR_3) {
  FUNC_2(&VAR_2->dev, "Unsupported DB configuration\n");
  return -VAR_0;
 }

 if (FUNC_7(VAR_2) < 1 && FUNC_5(VAR_2) < 1) {
  FUNC_2(&VAR_2->dev, "Scratchpads and messages unsupported\n");
  return -VAR_0;
 } else if (FUNC_7(VAR_2) < 1) {
  FUNC_1(&VAR_2->dev, "Scratchpads unsupported\n");
 } else if (FUNC_5(VAR_2) < 1) {
  FUNC_1(&VAR_2->dev, "Messages unsupported\n");
 }

 return 0;
}
