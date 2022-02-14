
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpdma_data {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (int ,int,char const*,struct device*,int ,struct vpdma_data*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct vpdma_data *VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = &VAR_4->pdev->dev;

 VAR_5 = FUNC_2(VAR_1, 1,
  (const char *) VAR_2, VAR_6, VAR_0, VAR_4,
  VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_6, "firmware not available %s\n", VAR_2);
  return VAR_5;
 } else {
  FUNC_1(VAR_6, "loading firmware %s\n", VAR_2);
 }

 return 0;
}
