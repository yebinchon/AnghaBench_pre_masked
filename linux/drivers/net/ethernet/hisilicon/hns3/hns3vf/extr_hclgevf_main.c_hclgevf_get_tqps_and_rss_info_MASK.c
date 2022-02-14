
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int rss_size_max; int num_tqps; } ;


 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_1(struct hnae3_handle *VAR_0,
       u16 *VAR_1, u16 *VAR_2)
{
 struct hclgevf_dev *VAR_3 = FUNC_0(VAR_0);

 *VAR_1 = VAR_3->num_tqps;
 *VAR_2 = VAR_3->rss_size_max;
}
