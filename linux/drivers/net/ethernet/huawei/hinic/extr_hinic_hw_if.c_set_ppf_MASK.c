
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_func_attr {scalar_t__ ppf_idx; int func_type; } ;
struct hinic_hwif {struct hinic_func_attr attr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hinic_hwif*) ;
 int FUNC_2 (struct hinic_hwif*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct hinic_hwif*,int ) ;
 int FUNC_7 (struct hinic_hwif*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct hinic_hwif *VAR_2)
{
 struct hinic_func_attr *VAR_3 = &VAR_2->attr;
 u32 VAR_4, VAR_5, VAR_6;


 VAR_4 = FUNC_0(FUNC_2(VAR_2));

 VAR_5 = FUNC_6(VAR_2, VAR_4);
 VAR_5 = FUNC_3(VAR_5, VAR_1);

 VAR_6 = FUNC_5(FUNC_1(VAR_2), VAR_1);

 VAR_5 |= VAR_6;
 FUNC_7(VAR_2, VAR_4, VAR_5);


 VAR_5 = FUNC_6(VAR_2, VAR_4);

 VAR_3->ppf_idx = FUNC_4(VAR_5, VAR_1);
 if (VAR_3->ppf_idx == FUNC_1(VAR_2))
  VAR_3->func_type = VAR_0;
}
