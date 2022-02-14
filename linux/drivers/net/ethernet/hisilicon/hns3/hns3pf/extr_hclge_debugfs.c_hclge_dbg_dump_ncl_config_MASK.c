
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; } ;
struct hclge_desc {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hclge_dev*,struct hclge_desc*,int,int,int ) ;
 int FUNC_3 (struct hclge_dev*,struct hclge_desc*,int*,int*) ;
 int FUNC_4 (char const*,char*,int*,int*) ;

__attribute__((used)) static void FUNC_5(struct hclge_dev *VAR_4,
          const char *VAR_5)
{



 struct hclge_desc VAR_6[VAR_0];
 int VAR_7 = VAR_0;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_5, "%x %x", &VAR_8, &VAR_9);
 if (VAR_11 != 2 || VAR_8 >= 4096 ||
     VAR_9 > 4096 - VAR_8) {
  FUNC_0(&VAR_4->pdev->dev, "Invalid offset or length.\n");
  return;
 }
 if (VAR_8 < 0 || VAR_9 <= 0) {
  FUNC_0(&VAR_4->pdev->dev, "Non-positive offset or length.\n");
  return;
 }

 FUNC_1(&VAR_4->pdev->dev, "offset |    data\n");

 while (VAR_9 > 0) {
  VAR_10 = VAR_8;
  if (VAR_9 >= (20 + 24 * 4))
   VAR_10 |= (20 + 24 * 4) << 16;
  else
   VAR_10 |= VAR_9 << 16;
  VAR_11 = FUNC_2(VAR_4, VAR_6, VAR_10, VAR_7,
      VAR_3);
  if (VAR_11)
   return;

  FUNC_3(VAR_4, VAR_6, &VAR_8, &VAR_9);
 }
}
