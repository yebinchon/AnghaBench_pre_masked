
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int basic_stats; } ;
struct ena_com_stats_ctx {TYPE_1__ get_resp; } ;
struct ena_com_dev {int dummy; } ;
struct ena_admin_basic_stats {int dummy; } ;
typedef int ctx ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_com_stats_ctx*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ena_admin_basic_stats*,int *,int) ;
 int FUNC_3 (struct ena_com_stats_ctx*,int,int) ;

int FUNC_4(struct ena_com_dev *VAR_1,
    struct ena_admin_basic_stats *VAR_2)
{
 struct ena_com_stats_ctx VAR_3;
 int VAR_4;

 FUNC_3(&VAR_3, 0x0, sizeof(VAR_3));
 VAR_4 = FUNC_0(VAR_1, &VAR_3, VAR_0);
 if (FUNC_1(VAR_4 == 0))
  FUNC_2(VAR_2, &VAR_3.get_resp.basic_stats,
         sizeof(VAR_3.get_resp.basic_stats));

 return VAR_4;
}
