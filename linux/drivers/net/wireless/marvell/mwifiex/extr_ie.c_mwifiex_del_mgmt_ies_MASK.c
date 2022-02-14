
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int assocresp_idx; int proberesp_idx; int beacon_idx; int gen_idx; } ;
struct mwifiex_ie {scalar_t__ ie_length; void* mgmt_subtype_mask; void* ie_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_ie*) ;
 struct mwifiex_ie* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mwifiex_private*,struct mwifiex_ie*,int *,struct mwifiex_ie*,int *,struct mwifiex_ie*,int *) ;

int FUNC_4(struct mwifiex_private *VAR_4)
{
 struct mwifiex_ie *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 struct mwifiex_ie *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (VAR_4->gen_idx != VAR_2) {
  VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   return -VAR_0;

  VAR_8->ie_index = FUNC_0(VAR_4->gen_idx);
  VAR_8->mgmt_subtype_mask = FUNC_0(VAR_3);
  VAR_8->ie_length = 0;
  if (FUNC_3(VAR_4, VAR_8, &VAR_4->gen_idx,
       ((void*)0), &VAR_4->proberesp_idx,
       ((void*)0), &VAR_4->assocresp_idx)) {
   VAR_9 = -1;
   goto done;
  }

  VAR_4->gen_idx = VAR_2;
 }

 if (VAR_4->beacon_idx != VAR_2) {
  VAR_5 = FUNC_2(sizeof(struct mwifiex_ie), VAR_1);
  if (!VAR_5) {
   VAR_9 = -VAR_0;
   goto done;
  }
  VAR_5->ie_index = FUNC_0(VAR_4->beacon_idx);
  VAR_5->mgmt_subtype_mask = FUNC_0(VAR_3);
  VAR_5->ie_length = 0;
 }
 if (VAR_4->proberesp_idx != VAR_2) {
  VAR_6 = FUNC_2(sizeof(struct mwifiex_ie), VAR_1);
  if (!VAR_6) {
   VAR_9 = -VAR_0;
   goto done;
  }
  VAR_6->ie_index = FUNC_0(VAR_4->proberesp_idx);
  VAR_6->mgmt_subtype_mask = FUNC_0(VAR_3);
  VAR_6->ie_length = 0;
 }
 if (VAR_4->assocresp_idx != VAR_2) {
  VAR_7 = FUNC_2(sizeof(struct mwifiex_ie), VAR_1);
  if (!VAR_7) {
   VAR_9 = -VAR_0;
   goto done;
  }
  VAR_7->ie_index = FUNC_0(VAR_4->assocresp_idx);
  VAR_7->mgmt_subtype_mask = FUNC_0(VAR_3);
  VAR_7->ie_length = 0;
 }

 if (VAR_5 || VAR_6 || VAR_7)
  VAR_9 = FUNC_3(VAR_4,
         VAR_5, &VAR_4->beacon_idx,
         VAR_6, &VAR_4->proberesp_idx,
         VAR_7, &VAR_4->assocresp_idx);

done:
 FUNC_1(VAR_8);
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);

 return VAR_9;
}
