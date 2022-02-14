
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath6kl_bmi_target_info {int type; int version; int byte_count; } ;
struct TYPE_2__ {scalar_t__ done_sent; } ;
struct ath6kl {scalar_t__ hif_type; TYPE_1__ bmi; } ;
typedef int cid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct ath6kl*,int *,int) ;
 int FUNC_4 (struct ath6kl*,int *,int) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct ath6kl *VAR_6,
          struct ath6kl_bmi_target_info *VAR_7)
{
 int VAR_8;
 u32 VAR_9 = VAR_2;

 if (VAR_6->bmi.done_sent) {
  FUNC_2("bmi done sent already, cmd %d disallowed\n", VAR_9);
  return -VAR_3;
 }

 VAR_8 = FUNC_4(VAR_6, (u8 *)&VAR_9, sizeof(VAR_9));
 if (VAR_8) {
  FUNC_2("Unable to send get target info: %d\n", VAR_8);
  return VAR_8;
 }

 if (VAR_6->hif_type == VAR_1) {
  VAR_8 = FUNC_3(VAR_6, (u8 *)VAR_7,
       sizeof(*VAR_7));
 } else {
  VAR_8 = FUNC_3(VAR_6, (u8 *)&VAR_7->version,
    sizeof(VAR_7->version));
 }

 if (VAR_8) {
  FUNC_2("Unable to recv target info: %d\n", VAR_8);
  return VAR_8;
 }

 if (FUNC_5(VAR_7->version) == VAR_5) {

  VAR_8 = FUNC_3(VAR_6,
       (u8 *)&VAR_7->byte_count,
       sizeof(VAR_7->byte_count));
  if (VAR_8) {
   FUNC_2("unable to read target info byte count: %d\n",
       VAR_8);
   return VAR_8;
  }





  if (FUNC_5(VAR_7->byte_count) != sizeof(*VAR_7)) {
   FUNC_0(1);
   return -VAR_4;
  }


  VAR_8 = FUNC_3(VAR_6,
       ((u8 *)VAR_7) +
       sizeof(VAR_7->byte_count),
       sizeof(*VAR_7) -
       sizeof(VAR_7->byte_count));

  if (VAR_8) {
   FUNC_2("Unable to read target info (%d bytes): %d\n",
       VAR_7->byte_count, VAR_8);
   return VAR_8;
  }
 }

 FUNC_1(VAR_0, "target info (ver: 0x%x type: 0x%x)\n",
     VAR_7->version, VAR_7->type);

 return 0;
}
