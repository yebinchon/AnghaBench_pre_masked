
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct asd_ha_struct {int iospace; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*,scalar_t__) ;
 int FUNC_1 (struct asd_ha_struct*,void*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct asd_ha_struct *VAR_1, void *VAR_2,
       u32 VAR_3, int VAR_4)
{
 u8 *VAR_5 = VAR_2;
 if (FUNC_2(VAR_1->iospace))
  FUNC_1(VAR_1, VAR_2, VAR_3+VAR_0, VAR_4);
 else {
  for ( ; VAR_4 > 0; VAR_4--, VAR_3++, VAR_5++)
   *VAR_5 = FUNC_0(VAR_1, VAR_3);
 }
 return VAR_4;
}
