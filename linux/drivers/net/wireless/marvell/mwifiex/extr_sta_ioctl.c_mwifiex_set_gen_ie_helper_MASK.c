
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wps_oui ;
typedef int wpa_oui ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int session_enable; } ;
struct mwifiex_private {int gen_ie_buf_len; scalar_t__ gen_ie_buf; int adapter; TYPE_1__ wps; } ;
struct ieee_types_vendor_header {int len; scalar_t__ element_id; int oui; } ;
struct ieee_types_header {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (scalar_t__,int*,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mwifiex_private*,int*,int) ;
 int FUNC_4 (struct mwifiex_private*,int*,int) ;
 int FUNC_5 (struct mwifiex_private*,int*,int) ;

__attribute__((used)) static int
FUNC_6(struct mwifiex_private *VAR_4, u8 *VAR_5,
     u16 VAR_6)
{
 struct ieee_types_vendor_header *VAR_7;
 const u8 VAR_8[] = { 0x00, 0x50, 0xf2, 0x01 };
 const u8 VAR_9[] = { 0x00, 0x50, 0xf2, 0x04 };
 u16 VAR_10 = VAR_6, VAR_11;


 if (!VAR_6) {
  VAR_4->gen_ie_buf_len = 0;
  VAR_4->wps.session_enable = 0;
  return 0;
 } else if (!VAR_5 ||
     VAR_6 <= sizeof(struct ieee_types_header)) {
  return -1;
 }
 VAR_7 = (struct ieee_types_vendor_header *) VAR_5;

 while (VAR_7) {
  VAR_11 = VAR_7->len + sizeof(struct ieee_types_header);

  if (VAR_7->element_id == VAR_2) {

   FUNC_4(VAR_4, (u8 *)VAR_7, VAR_11);
   VAR_4->wps.session_enable = 0;
   goto next_ie;
  }

  if (VAR_7->element_id == VAR_1) {

   FUNC_3(VAR_4, (u8 *)VAR_7,
         VAR_11);
   goto next_ie;
  }

  if (VAR_7->element_id == VAR_3) {



   if (!FUNC_0(&VAR_7->oui, VAR_8,
        sizeof(VAR_8))) {


    FUNC_4(VAR_4, (u8 *)VAR_7,
         VAR_11);
    VAR_4->wps.session_enable = 0;
    goto next_ie;
   }

   if (!FUNC_0(&VAR_7->oui, VAR_9,
        sizeof(VAR_9))) {



    VAR_4->wps.session_enable = 1;
    FUNC_2(VAR_4->adapter, VAR_0,
         "WPS Session Enabled.\n");
    FUNC_5(VAR_4, (u8 *)VAR_7,
         VAR_11);
    goto next_ie;
   }
  }






  if (VAR_11 <
      (sizeof(VAR_4->gen_ie_buf) - VAR_4->gen_ie_buf_len)) {



   FUNC_1(VAR_4->gen_ie_buf + VAR_4->gen_ie_buf_len,
          (u8 *)VAR_7, VAR_11);



   VAR_4->gen_ie_buf_len += VAR_11;
  }

next_ie:
  VAR_10 -= VAR_11;

  if (VAR_10 <= sizeof(struct ieee_types_header))
   VAR_7 = ((void*)0);
  else
   VAR_7 = (struct ieee_types_vendor_header *)
    (((u8 *)VAR_7) + VAR_11);
 }

 return 0;
}
