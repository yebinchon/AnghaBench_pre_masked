
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct se_portal_group {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 char FUNC_6 (char) ;

__attribute__((used)) static char *FUNC_7(
 struct se_portal_group *VAR_0,
 char *VAR_1,
 u32 *VAR_2,
 char **VAR_3)
{
 char *VAR_4;
 u32 VAR_5, VAR_6;
 int VAR_7;
 u16 VAR_8;
 u8 VAR_9 = (VAR_1[0] & 0xc0);
 if ((VAR_9 != 0x00) && (VAR_9 != 0x40)) {
  FUNC_3("Illegal format code: 0x%02x for iSCSI"
   " Initiator Transport ID\n", VAR_9);
  return ((void*)0);
 }




 if (VAR_2) {

  VAR_8 = FUNC_0(&VAR_1[2]);

  VAR_5 = FUNC_4(&VAR_1[4]);
  VAR_5 += 4;
  VAR_5 += 1;
  VAR_6 = ((-VAR_5) & 3);
  if (VAR_6 != 0)
   VAR_5 += VAR_6;

  if ((VAR_8 + 4) != VAR_5) {
   FUNC_2("LIO-Target Extracted add_len: %hu "
    "does not match calculated tid_len: %u,"
    " using tid_len instead\n", VAR_8+4, VAR_5);
   *VAR_2 = VAR_5;
  } else
   *VAR_2 = (VAR_8 + 4);
 }





 if (VAR_9 == 0x40) {
  VAR_4 = FUNC_5(&VAR_1[4], ",i,0x");
  if (!VAR_4) {
   FUNC_3("Unable to locate \",i,0x\" separator"
    " for Initiator port identifier: %s\n",
    &VAR_1[4]);
   return ((void*)0);
  }
  *VAR_4 = '\0';
  VAR_4 += 5;

  *VAR_3 = VAR_4;






  for (VAR_7 = 0; VAR_7 < 12; VAR_7++) {
   if (FUNC_1(*VAR_4)) {
    VAR_4++;
    continue;
   }
   *VAR_4 = FUNC_6(*VAR_4);
   VAR_4++;
  }
 }

 return &VAR_1[4];
}
