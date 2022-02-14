
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_ha_struct {int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct asd_ha_struct*,int) ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct asd_ha_struct*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct asd_ha_struct *VAR_2)
{
 u32 VAR_3 = FUNC_3(VAR_2, VAR_1);

 if (VAR_3 & VAR_0) {
  FUNC_2("%s: CFIFTOERR\n", FUNC_4(VAR_2->pcidev));
  FUNC_1(VAR_2);
 } else
  FUNC_0(VAR_2, VAR_3);
}
