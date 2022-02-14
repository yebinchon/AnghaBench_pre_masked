
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hisi_hba {int n_phy; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct hisi_hba*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hisi_hba *VAR_2, u8 VAR_3,
   u8 VAR_4, u8 VAR_5, u8 *VAR_6)
{
 struct device *VAR_7 = VAR_2->dev;
 u32 *VAR_8 = (u32 *)VAR_6;
 int VAR_9;

 switch (VAR_3) {
 case 128:
  if ((VAR_4 + VAR_5) > ((VAR_2->n_phy + 3) / 4)) {
   FUNC_0(VAR_7, "write gpio: invalid reg range[%d, %d]\n",
    VAR_4, VAR_4 + VAR_5 - 1);
   return -VAR_0;
  }

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
   FUNC_1(VAR_2,
      VAR_1 + (VAR_4 + VAR_9) * 4,
      VAR_8[VAR_9]);
  break;
 default:
  FUNC_0(VAR_7, "write gpio: unsupported or bad reg type %d\n",
   VAR_3);
  return -VAR_0;
 }

 return 0;
}
