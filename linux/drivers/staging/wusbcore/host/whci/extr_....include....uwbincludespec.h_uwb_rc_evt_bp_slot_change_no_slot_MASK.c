
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_evt_bp_slot_change {int slot_info; } ;



__attribute__((used)) static inline int FUNC_0(
 const struct uwb_rc_evt_bp_slot_change *VAR_0)
{
 return (VAR_0->slot_info & 0x80) >> 7;
}
