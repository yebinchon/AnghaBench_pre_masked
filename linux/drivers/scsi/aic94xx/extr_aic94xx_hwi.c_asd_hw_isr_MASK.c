
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_ha_struct {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct asd_ha_struct*) ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (struct asd_ha_struct*) ;
 int FUNC_4 (struct asd_ha_struct*) ;
 int FUNC_5 (struct asd_ha_struct*,int ) ;
 int FUNC_6 (struct asd_ha_struct*,int ,int) ;

irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct asd_ha_struct *VAR_10 = VAR_9;
 u32 VAR_11 = FUNC_5(VAR_10, VAR_0);

 if (!VAR_11)
  return VAR_7;

 FUNC_6(VAR_10, VAR_0, VAR_11);
 (void) FUNC_5(VAR_10, VAR_0);

 if (VAR_11 & VAR_3)
  FUNC_3(VAR_10);
 if (VAR_11 & VAR_1)
  FUNC_0(VAR_10);
 if (VAR_11 & VAR_2)
  FUNC_1(VAR_10);
 if (VAR_11 & VAR_5)
  FUNC_4(VAR_10);
 if (VAR_11 & VAR_4)
  FUNC_2(VAR_10);

 return VAR_6;
}
