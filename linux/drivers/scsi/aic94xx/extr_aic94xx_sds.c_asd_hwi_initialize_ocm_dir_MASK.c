
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_ocm_dir_ent {int dummy; } ;
struct asd_ocm_dir {int dummy; } ;
struct asd_ha_struct {int dummy; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asd_ha_struct*,int,int ) ;
 int FUNC_1 (struct asd_ha_struct*,int *,int,int) ;

__attribute__((used)) static void
FUNC_2 (struct asd_ha_struct *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 4)
  FUNC_0(VAR_4, VAR_5, 0);


 FUNC_1(VAR_4, &VAR_1, 0,
     sizeof(struct asd_ocm_dir));


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_1(VAR_4, &VAR_0[VAR_5],
      sizeof(struct asd_ocm_dir) +
      (VAR_5 * sizeof(struct asd_ocm_dir_ent))
      , sizeof(struct asd_ocm_dir_ent));

}
