
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_2__ {int mac_stats; } ;
struct hclge_dev {TYPE_1__ hw_stats; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ,int ,int *) ;
 struct hclge_vport* FUNC_2 (struct hnae3_handle*) ;
 int * FUNC_3 (struct hnae3_handle*,int *) ;

__attribute__((used)) static void FUNC_4(struct hnae3_handle *VAR_1, u64 *VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_2(VAR_1);
 struct hclge_dev *VAR_4 = VAR_3->back;
 u64 *VAR_5;

 VAR_5 = FUNC_1(&VAR_4->hw_stats.mac_stats, VAR_0,
     FUNC_0(VAR_0), VAR_2);
 VAR_5 = FUNC_3(VAR_1, VAR_5);
}
