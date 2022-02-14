
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rceb {scalar_t__ bEventType; scalar_t__ wEvent; scalar_t__ bEventContext; } ;
struct uwb_rc_neh {scalar_t__ evt_type; scalar_t__ evt; scalar_t__ context; } ;



__attribute__((used)) static bool FUNC_0(struct uwb_rc_neh *VAR_0, const struct uwb_rceb *VAR_1)
{
 return VAR_0->evt_type == VAR_1->bEventType
  && VAR_0->evt == VAR_1->wEvent
  && VAR_0->context == VAR_1->bEventContext;
}
