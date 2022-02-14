
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_attach_info {int vols_found; int erase; int volumes; } ;
struct ubi_ainf_volume {int rb; int vol_id; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ubi_attach_info*,struct ubi_ainf_volume*,int *) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct ubi_attach_info *VAR_0, struct ubi_ainf_volume *VAR_1)
{
 FUNC_0("remove attaching information about volume %d", VAR_1->vol_id);

 FUNC_2(&VAR_1->rb, &VAR_0->volumes);
 FUNC_1(VAR_0, VAR_1, &VAR_0->erase);
 VAR_0->vols_found -= 1;
}
