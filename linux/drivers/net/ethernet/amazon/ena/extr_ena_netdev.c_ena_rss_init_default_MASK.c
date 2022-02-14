
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ena_com_dev {int dummy; } ;
struct ena_adapter {int num_queues; TYPE_1__* pdev; struct ena_com_dev* ena_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct ena_com_dev*,int ,int *,int ,int) ;
 int FUNC_3 (struct ena_com_dev*,int,int ) ;
 int FUNC_4 (struct ena_com_dev*) ;
 int FUNC_5 (struct ena_com_dev*,int ) ;
 int FUNC_6 (struct ena_com_dev*) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ena_adapter *VAR_5)
{
 struct ena_com_dev *VAR_6 = VAR_5->ena_dev;
 struct device *VAR_7 = &VAR_5->pdev->dev;
 int VAR_8, VAR_9;
 u32 VAR_10;

 VAR_8 = FUNC_5(VAR_6, VAR_2);
 if (FUNC_8(VAR_8)) {
  FUNC_1(VAR_7, "Cannot init indirect table\n");
  goto err_rss_init;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_10 = FUNC_7(VAR_9, VAR_5->num_queues);
  VAR_8 = FUNC_3(VAR_6, VAR_9,
             FUNC_0(VAR_10));
  if (FUNC_8(VAR_8 && (VAR_8 != -VAR_4))) {
   FUNC_1(VAR_7, "Cannot fill indirect table\n");
   goto err_fill_indir;
  }
 }

 VAR_8 = FUNC_2(VAR_6, VAR_0, ((void*)0),
     VAR_1, 0xFFFFFFFF);
 if (FUNC_8(VAR_8 && (VAR_8 != -VAR_4))) {
  FUNC_1(VAR_7, "Cannot fill hash function\n");
  goto err_fill_indir;
 }

 VAR_8 = FUNC_6(VAR_6);
 if (FUNC_8(VAR_8 && (VAR_8 != -VAR_4))) {
  FUNC_1(VAR_7, "Cannot fill hash control\n");
  goto err_fill_indir;
 }

 return 0;

err_fill_indir:
 FUNC_4(VAR_6);
err_rss_init:

 return VAR_8;
}
