
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_hba {int hbalock; } ;
struct lpfc_fcf_rec {int addr_mode; int flag; int vlan_id; } ;
struct fcf_record {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_hba*,int ,struct fcf_record*) ;
 int FUNC_1 (int ,struct fcf_record*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_fcf_rec*,struct fcf_record*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct lpfc_hba *VAR_2, struct lpfc_fcf_rec *VAR_3,
         struct fcf_record *VAR_4, uint32_t VAR_5,
         uint16_t VAR_6, uint32_t VAR_7)
{
 FUNC_2(&VAR_2->hbalock);


 FUNC_3(VAR_3, VAR_4);

 VAR_3->addr_mode = VAR_5;
 VAR_3->vlan_id = VAR_6;
 VAR_3->flag |= (VAR_7 | VAR_0);
 FUNC_0(VAR_2,
  FUNC_1(VAR_1, VAR_4),
     VAR_4);
}
