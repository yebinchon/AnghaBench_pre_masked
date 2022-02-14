
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tbl_log_size; } ;
struct ena_com_dev {TYPE_1__ rss; } ;
struct ena_adapter {int netdev; struct ena_com_dev* ena_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (struct ena_adapter*) ;
 int VAR_1 ;
 int FUNC_4 (struct ena_adapter*,int ,int ,char*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ena_adapter *VAR_2)
{
 struct ena_com_dev *VAR_3 = VAR_2->ena_dev;
 int VAR_4;


 if (!VAR_3->rss.tbl_log_size) {
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4 && (VAR_4 != -VAR_0)) {
   FUNC_4(VAR_2, VAR_1, VAR_2->netdev,
      "Failed to init RSS rc: %d\n", VAR_4);
   return VAR_4;
  }
 }


 VAR_4 = FUNC_0(VAR_3);
 if (FUNC_5(VAR_4 && VAR_4 != -VAR_0))
  return VAR_4;


 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_5(VAR_4 && (VAR_4 != -VAR_0)))
  return VAR_4;


 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_5(VAR_4 && (VAR_4 != -VAR_0)))
  return VAR_4;

 return 0;
}
