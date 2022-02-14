
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct device {int dummy; } ;
struct cgx {int lmac_count; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct cgx*) ;
 int FUNC_2 (struct device*,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct cgx *VAR_5)
{
 struct device *VAR_6 = &VAR_5->pdev->dev;
 int VAR_7, VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (!VAR_5->lmac_count)
  return 0;

 VAR_10 = FUNC_1(&VAR_9, VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_0(VAR_3, VAR_9);
 VAR_8 = FUNC_0(VAR_4, VAR_9);
 FUNC_2(VAR_6, "Firmware command interface version = %d.%d\n",
  VAR_7, VAR_8);
 if (VAR_7 != VAR_0 ||
     VAR_8 != VAR_1)
  return -VAR_2;
 else
  return 0;
}
