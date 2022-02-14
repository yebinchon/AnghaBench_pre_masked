
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hpsa_scsi_dev_t {scalar_t__ external; int rev; } ;
struct ctlr_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hpsa_scsi_dev_t*,int,int,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ctlr_info *VAR_5,
 u8 *VAR_6, struct hpsa_scsi_dev_t *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_6);

 if (!FUNC_3(VAR_6)) {

  if (FUNC_2(VAR_6)) {
   int VAR_9 = VAR_1;

   if (!VAR_7->rev)
    VAR_9 = VAR_2;
   FUNC_1(VAR_7,
     VAR_9, 0, VAR_8 & 0x3fff);
  } else

   FUNC_1(VAR_7,
     VAR_3, -1, -1);
  return;
 }

 if (VAR_7->external) {
  FUNC_1(VAR_7,
   VAR_0, (VAR_8 >> 16) & 0x3fff,
   VAR_8 & 0x00ff);
  return;
 }
 FUNC_1(VAR_7, VAR_4,
    0, VAR_8 & 0x3fff);
}
