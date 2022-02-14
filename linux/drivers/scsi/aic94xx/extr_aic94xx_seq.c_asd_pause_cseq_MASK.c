
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_ha_struct {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct asd_ha_struct*,int ) ;
 int FUNC_2 (struct asd_ha_struct*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct asd_ha_struct *VAR_5)
{
 int VAR_6 = VAR_4;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_0);
 if (VAR_7 & VAR_2)
  return 0;

 FUNC_2(VAR_5, VAR_0, VAR_7 | VAR_1);
 do {
  VAR_7 = FUNC_1(VAR_5, VAR_0);
  if (VAR_7 & VAR_2)
   return 0;
  FUNC_3(VAR_3);
 } while (--VAR_6 > 0);

 FUNC_0("couldn't pause CSEQ\n");
 return -1;
}
