
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct TYPE_2__ {unsigned long hw_rst_done_cnt; } ;
struct hclgevf_dev {TYPE_1__ rst_stats; } ;


 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static unsigned long FUNC_1(struct hnae3_handle *VAR_0)
{
 struct hclgevf_dev *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->rst_stats.hw_rst_done_cnt;
}
