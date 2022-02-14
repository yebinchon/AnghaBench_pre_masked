
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u16 ;
struct mwifiex_private {unsigned int gen_idx; } ;
struct mwifiex_ie {void* ie_length; void* mgmt_subtype_mask; void* ie_index; scalar_t__ ie_buffer; } ;
struct ieee_types_header {int len; int element_id; } ;
struct ieee80211_vendor_ie {int len; int element_id; } ;
struct cfg80211_beacon_data {int tail_len; int const* tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ,int const*,unsigned int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct mwifiex_ie*) ;
 struct mwifiex_ie* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__,struct ieee_types_header*,unsigned int) ;
 scalar_t__ FUNC_5 (struct mwifiex_private*,struct mwifiex_ie*,unsigned int*,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct mwifiex_private *VAR_11,
          struct cfg80211_beacon_data *VAR_12)
{
 struct mwifiex_ie *VAR_13;
 struct ieee_types_header *VAR_14;
 struct ieee80211_vendor_ie *VAR_15;
 u16 VAR_16 = VAR_7, VAR_17 = 0;
 int VAR_18, VAR_19 = 0;
 unsigned int VAR_20;
 int VAR_21 = 0;

 if (!VAR_12->tail || !VAR_12->tail_len)
  return 0;

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_18 = VAR_12->tail_len;




 while (VAR_18 > sizeof(struct ieee_types_header)) {
  VAR_14 = (void *)(VAR_12->tail + VAR_19);
  VAR_20 = VAR_14->len + sizeof(struct ieee_types_header);
  if (VAR_20 > VAR_18) {
   VAR_21 = -VAR_0;
   goto out;
  }

  switch (VAR_14->element_id) {
  case 132:
  case 131:
  case 138:
  case 133:
  case 137:
  case 136:
  case 135:
  case 134:
  case 129:
  case 128:
   break;
  case 130:

   if (FUNC_0(VAR_8,
          VAR_9,
          (const u8 *)VAR_14,
          VAR_20))
    break;

  default:
   if (VAR_17 + VAR_20 > VAR_3) {
    VAR_21 = -VAR_0;
    goto out;
   }
   FUNC_4(VAR_13->ie_buffer + VAR_17, VAR_14, VAR_20);
   VAR_17 += VAR_20;
   break;
  }
  VAR_18 -= VAR_20;
  VAR_19 += VAR_20;
 }




 VAR_15 = (void *)FUNC_0(VAR_8,
          VAR_10,
          VAR_12->tail, VAR_12->tail_len);
 if (VAR_15) {
  VAR_20 = VAR_15->len + sizeof(struct ieee_types_header);
  if (VAR_17 + VAR_20 > VAR_3) {
   VAR_21 = -VAR_0;
   goto out;
  }
  FUNC_4(VAR_13->ie_buffer + VAR_17, VAR_15, VAR_20);
  VAR_17 += VAR_20;
 }

 if (!VAR_17)
  goto out;

 VAR_13->ie_index = FUNC_1(VAR_16);
 VAR_13->mgmt_subtype_mask = FUNC_1(VAR_5 |
      VAR_6 |
      VAR_4);
 VAR_13->ie_length = FUNC_1(VAR_17);

 if (FUNC_5(VAR_11, VAR_13, &VAR_16, ((void*)0), ((void*)0),
      ((void*)0), ((void*)0))) {
  VAR_21 = -VAR_0;
  goto out;
 }

 VAR_11->gen_idx = VAR_16;

 out:
 FUNC_2(VAR_13);
 return VAR_21;
}
