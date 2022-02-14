
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lkb {scalar_t__ lkb_rqmode; scalar_t__ lkb_grmode; } ;


 int FUNC_0 (struct dlm_lkb*) ;

__attribute__((used)) static inline int FUNC_1(struct dlm_lkb *VAR_0)
{
 return (!FUNC_0(VAR_0) && VAR_0->lkb_rqmode < VAR_0->lkb_grmode);
}
