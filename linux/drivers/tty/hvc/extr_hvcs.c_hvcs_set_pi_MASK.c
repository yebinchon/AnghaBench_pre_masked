
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvcs_struct {int p_location_code; int p_partition_ID; int p_unit_address; } ;
struct hvcs_partner_info {int location_code; int partition_ID; int unit_address; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hvcs_partner_info *VAR_0, struct hvcs_struct *VAR_1)
{
 VAR_1->p_unit_address = VAR_0->unit_address;
 VAR_1->p_partition_ID = VAR_0->partition_ID;


 FUNC_0(VAR_1->p_location_code, VAR_0->location_code,
  sizeof(VAR_1->p_location_code));
}
