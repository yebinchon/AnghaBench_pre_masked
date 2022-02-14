
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_eaddr {scalar_t__ manf_id; scalar_t__ prod_code; scalar_t__ dev_index; scalar_t__ instance; } ;



__attribute__((used)) static bool FUNC_0(struct slim_eaddr *VAR_0, struct slim_eaddr *VAR_1)
{
 return (VAR_0->manf_id == VAR_1->manf_id &&
  VAR_0->prod_code == VAR_1->prod_code &&
  VAR_0->dev_index == VAR_1->dev_index &&
  VAR_0->instance == VAR_1->instance);
}
