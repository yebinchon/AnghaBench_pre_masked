
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rc {TYPE_1__* ies; } ;
struct uwb_ie_hdr {int element_id; scalar_t__ length; } ;
typedef enum uwb_ie { ____Placeholder_uwb_ie } uwb_ie ;
struct TYPE_2__ {int wIELength; void* IEData; } ;


 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct uwb_ie_hdr*,void*,size_t) ;
 struct uwb_ie_hdr* FUNC_3 (void**,size_t*) ;

__attribute__((used)) static
void FUNC_4(struct uwb_rc *VAR_0, enum uwb_ie VAR_1)
{
 struct uwb_ie_hdr *VAR_2;
 size_t VAR_3 = FUNC_1(VAR_0->ies->wIELength);
 void *VAR_4;
 size_t VAR_5;

 VAR_4 = VAR_0->ies->IEData;
 VAR_5 = VAR_3;
 for (;;) {
  VAR_2 = FUNC_3(&VAR_4, &VAR_5);
  if (!VAR_2)
   break;
  if (VAR_2->element_id == VAR_1) {
   VAR_3 -= sizeof(struct uwb_ie_hdr) + VAR_2->length;
   FUNC_2(VAR_2, VAR_4, VAR_5);
   VAR_4 = VAR_2;
  }
 }
 VAR_0->ies->wIELength = FUNC_0(VAR_3);
}
