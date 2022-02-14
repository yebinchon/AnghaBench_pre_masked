
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_cmd_set_ie {int wIELength; void* IEData; } ;
struct uwb_rc {size_t ies_capacity; struct uwb_rc_cmd_set_ie* ies; } ;
struct uwb_ie_hdr {int length; scalar_t__ element_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 struct uwb_rc_cmd_set_ie* FUNC_1 (struct uwb_rc_cmd_set_ie*,size_t,int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (void*,struct uwb_ie_hdr const*,size_t) ;
 int FUNC_4 (void*,void*,size_t) ;
 struct uwb_ie_hdr* FUNC_5 (void**,size_t*) ;

__attribute__((used)) static int FUNC_6(struct uwb_rc *VAR_2, const struct uwb_ie_hdr *VAR_3)
{
 struct uwb_rc_cmd_set_ie *VAR_4;
 void *VAR_5, *VAR_6;
 struct uwb_ie_hdr *VAR_7;
 size_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_8 = FUNC_2(VAR_2->ies->wIELength);
 VAR_9 = sizeof(struct uwb_ie_hdr) + VAR_3->length;
 VAR_10 = sizeof(struct uwb_rc_cmd_set_ie) + VAR_8 + VAR_9;

 if (VAR_10 > VAR_2->ies_capacity) {
  VAR_4 = FUNC_1(VAR_2->ies, VAR_10, VAR_1);
  if (!VAR_4)
   return -VAR_0;
  VAR_2->ies = VAR_4;
 }

 VAR_5 = VAR_2->ies->IEData;
 VAR_11 = VAR_8;
 for (;;) {
  VAR_6 = VAR_5;
  VAR_12 = VAR_11;
  VAR_7 = FUNC_5(&VAR_5, &VAR_11);
  if (!VAR_7 || VAR_7->element_id > VAR_3->element_id)
   break;
 }

 FUNC_4(VAR_6 + VAR_9, VAR_6, VAR_12);
 FUNC_3(VAR_6, VAR_3, VAR_9);
 VAR_2->ies->wIELength = FUNC_0(VAR_8 + VAR_9);

 return 0;
}
