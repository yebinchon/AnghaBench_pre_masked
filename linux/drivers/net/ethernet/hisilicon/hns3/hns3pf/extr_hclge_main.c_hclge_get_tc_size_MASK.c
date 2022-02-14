
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int rss_size_max; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_1(struct hnae3_handle *VAR_0)
{
 struct hclge_vport *VAR_1 = FUNC_0(VAR_0);
 struct hclge_dev *VAR_2 = VAR_1->back;

 return VAR_2->rss_size_max;
}
