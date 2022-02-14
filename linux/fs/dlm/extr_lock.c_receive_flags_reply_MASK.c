
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_message {int m_flags; int m_sbflags; } ;
struct dlm_lkb {int lkb_flags; int lkb_sbflags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dlm_lkb *VAR_1, struct dlm_message *VAR_2)
{
 if (VAR_2->m_flags == VAR_0)
  return;

 VAR_1->lkb_sbflags = VAR_2->m_sbflags;
 VAR_1->lkb_flags = (VAR_1->lkb_flags & 0xFFFF0000) |
           (VAR_2->m_flags & 0x0000FFFF);
}
