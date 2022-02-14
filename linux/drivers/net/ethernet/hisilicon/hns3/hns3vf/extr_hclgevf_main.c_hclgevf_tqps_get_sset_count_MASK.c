
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_knic_private_info {int num_tqps; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;



__attribute__((used)) static int FUNC_0(struct hnae3_handle *VAR_0, int VAR_1)
{
 struct hnae3_knic_private_info *VAR_2 = &VAR_0->kinfo;

 return VAR_2->num_tqps * 2;
}
