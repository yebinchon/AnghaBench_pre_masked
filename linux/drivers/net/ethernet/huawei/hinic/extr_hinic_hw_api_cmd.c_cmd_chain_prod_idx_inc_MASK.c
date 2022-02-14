
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_api_cmd_chain {scalar_t__ prod_idx; } ;


 scalar_t__ FUNC_0 (struct hinic_api_cmd_chain*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct hinic_api_cmd_chain *VAR_0)
{
 VAR_0->prod_idx = FUNC_0(VAR_0, VAR_0->prod_idx + 1);
}
