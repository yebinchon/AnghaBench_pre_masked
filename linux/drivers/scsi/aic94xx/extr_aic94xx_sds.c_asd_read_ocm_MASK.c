
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ocm_dir {int dummy; } ;
struct asd_ha_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asd_ha_struct*,struct asd_ocm_dir*) ;
 scalar_t__ FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct asd_ha_struct*,struct asd_ocm_dir*,int ) ;
 int FUNC_4 (struct asd_ocm_dir*) ;
 struct asd_ocm_dir* FUNC_5 (int,int ) ;

int FUNC_6(struct asd_ha_struct *VAR_2)
{
 int VAR_3;
 struct asd_ocm_dir *VAR_4;

 if (FUNC_1(VAR_2))
  return -1;

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) {
  FUNC_2("no memory for ocm dir\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_3(VAR_2, VAR_4, 0);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_0(VAR_2, VAR_4);
out:
 FUNC_4(VAR_4);
 return VAR_3;
}
