
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct asd_ha_struct {int iolock; } ;


 int FUNC_0 (struct asd_ha_struct*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct asd_ha_struct *VAR_0, void *VAR_1,
     u32 VAR_2, int VAR_3)
{
 u8 *VAR_4 = VAR_1;
 unsigned long VAR_5;

 FUNC_1(&VAR_0->iolock, VAR_5);
 for ( ; VAR_3 > 0; VAR_3--, VAR_2++, VAR_4++)
  FUNC_0(VAR_0, VAR_2, *VAR_4);
 FUNC_2(&VAR_0->iolock, VAR_5);
}
