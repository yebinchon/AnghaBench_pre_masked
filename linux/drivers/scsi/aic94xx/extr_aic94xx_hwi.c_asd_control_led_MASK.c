
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_ha_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asd_ha_struct*,int ) ;
 int FUNC_1 (struct asd_ha_struct*,int ,int) ;

void FUNC_2(struct asd_ha_struct *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_4 < VAR_0) {
  u32 VAR_6;

  VAR_6 = FUNC_0(VAR_3, VAR_2);
  if (VAR_5)
   VAR_6 |= (1 << VAR_4);
  else
   VAR_6 &= ~(1 << VAR_4);
  FUNC_1(VAR_3, VAR_2, VAR_6);

  VAR_6 = FUNC_0(VAR_3, VAR_1);
  if (VAR_5)
   VAR_6 |= (1 << VAR_4);
  else
   VAR_6 &= ~(1 << VAR_4);
  FUNC_1(VAR_3, VAR_1, VAR_6);
 }
}
