
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rss_size; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct hclgevf_dev {int dummy; } ;
struct ethtool_channels {int combined_count; scalar_t__ max_other; scalar_t__ other_count; int max_combined; } ;


 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclgevf_dev*) ;

__attribute__((used)) static void FUNC_2(struct hnae3_handle *VAR_0,
     struct ethtool_channels *VAR_1)
{
 struct hclgevf_dev *VAR_2 = FUNC_0(VAR_0);

 VAR_1->max_combined = FUNC_1(VAR_2);
 VAR_1->other_count = 0;
 VAR_1->max_other = 0;
 VAR_1->combined_count = VAR_0->kinfo.rss_size;
}
