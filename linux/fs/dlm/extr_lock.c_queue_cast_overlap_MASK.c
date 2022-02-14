
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct dlm_rsb *VAR_2, struct dlm_lkb *VAR_3)
{
 FUNC_1(VAR_2, VAR_3,
     FUNC_0(VAR_3) ? -VAR_1 : -VAR_0);
}
