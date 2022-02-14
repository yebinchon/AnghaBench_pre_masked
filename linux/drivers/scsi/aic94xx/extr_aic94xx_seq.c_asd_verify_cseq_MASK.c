
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct asd_ha_struct {int pcidev; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct asd_ha_struct*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__ const) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct asd_ha_struct *VAR_1, const u8 *VAR_2,
      u32 VAR_3)
{
 u32 VAR_4 = VAR_0;
 const u32 *VAR_5 = (u32 *) VAR_2;
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 4, VAR_5++, VAR_4 += 4) {
  u32 VAR_7 = FUNC_2(VAR_1, VAR_4);

  if (FUNC_3(*VAR_5) != VAR_7) {
   FUNC_1("%s: cseq verify failed at %u "
       "read:0x%x, wanted:0x%x\n",
       FUNC_4(VAR_1->pcidev),
       VAR_6, VAR_7, FUNC_3(*VAR_5));
   return -1;
  }
 }
 FUNC_0("verified %d bytes, passed\n", VAR_3);
 return 0;
}
