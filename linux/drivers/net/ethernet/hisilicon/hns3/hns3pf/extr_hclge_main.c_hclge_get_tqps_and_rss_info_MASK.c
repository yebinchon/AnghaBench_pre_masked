
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {int alloc_tqps; struct hclge_dev* back; } ;
struct hclge_dev {int rss_size_max; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_1(struct hnae3_handle *VAR_0,
     u16 *VAR_1, u16 *VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_0(VAR_0);
 struct hclge_dev *VAR_4 = VAR_3->back;

 *VAR_1 = VAR_3->alloc_tqps;
 *VAR_2 = VAR_4->rss_size_max;
}
