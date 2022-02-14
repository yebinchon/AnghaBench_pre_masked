
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclgevf_rss_cfg {int rss_size; } ;
struct hclgevf_dev {struct hclgevf_rss_cfg rss_cfg; } ;


 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_1(struct hnae3_handle *VAR_0)
{
 struct hclgevf_dev *VAR_1 = FUNC_0(VAR_0);
 struct hclgevf_rss_cfg *VAR_2 = &VAR_1->rss_cfg;

 return VAR_2->rss_size;
}
