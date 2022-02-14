
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lkb {scalar_t__ lkb_grmode; scalar_t__ lkb_rqmode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct dlm_lkb *VAR_2)
{
 if ((VAR_2->lkb_grmode==VAR_1 && VAR_2->lkb_rqmode==VAR_0) ||
     (VAR_2->lkb_rqmode==VAR_1 && VAR_2->lkb_grmode==VAR_0))
  return 1;
 return 0;
}
