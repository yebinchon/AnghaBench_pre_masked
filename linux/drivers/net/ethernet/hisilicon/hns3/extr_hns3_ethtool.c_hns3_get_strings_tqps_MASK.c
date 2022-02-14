
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hnae3_knic_private_info {int num_tqps; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ,int ,int ,char const*) ;

__attribute__((used)) static u8 *FUNC_1(struct hnae3_handle *VAR_4, u8 *VAR_5)
{
 struct hnae3_knic_private_info *VAR_6 = &VAR_4->kinfo;
 const char VAR_7[] = "txq";
 const char VAR_8[] = "rxq";


 VAR_5 = FUNC_0(VAR_5, VAR_3, VAR_1,
       VAR_6->num_tqps, VAR_7);


 VAR_5 = FUNC_0(VAR_5, VAR_2, VAR_0,
       VAR_6->num_tqps, VAR_8);

 return VAR_5;
}
