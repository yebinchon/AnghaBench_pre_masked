
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mwifiex_ie {scalar_t__ ie_buffer; void* ie_index; void* mgmt_subtype_mask; int ie_length; } ;
struct ieee_types_header {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (unsigned int,int ,int const*,int) ;
 void* FUNC_1 (int ) ;
 struct mwifiex_ie* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (scalar_t__,struct ieee_types_header*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(const u8 *VAR_5, int VAR_6,
    struct mwifiex_ie **VAR_7, u16 VAR_8,
    unsigned int VAR_9, u8 VAR_10)
{
 struct ieee_types_header *VAR_11;
 struct mwifiex_ie *VAR_12 = *VAR_7;
 const u8 *VAR_13;

 VAR_13 = FUNC_0(VAR_9, VAR_10, VAR_5, VAR_6);
 if (VAR_13) {
  if (!*VAR_7) {
   *VAR_7 = FUNC_2(sizeof(struct mwifiex_ie),
       VAR_2);
   if (!*VAR_7)
    return -VAR_1;
   VAR_12 = *VAR_7;
  }

  VAR_11 = (struct ieee_types_header *)VAR_13;
  if (FUNC_3(VAR_12->ie_length) + VAR_11->len + 2 >
   VAR_3)
   return -VAR_0;
  FUNC_5(VAR_12->ie_buffer + FUNC_3(VAR_12->ie_length),
         VAR_11, VAR_11->len + 2);
  FUNC_4(&VAR_12->ie_length, VAR_11->len + 2);
  VAR_12->mgmt_subtype_mask = FUNC_1(VAR_8);
  VAR_12->ie_index = FUNC_1(VAR_4);
 }

 *VAR_7 = VAR_12;
 return 0;
}
