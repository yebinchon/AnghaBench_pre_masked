
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_wc {scalar_t__ wc_count; void* wc_cbarg; int wc_resume; } ;
typedef int bfa_wc_resume_t ;


 int FUNC_0 (struct bfa_wc*) ;

__attribute__((used)) static inline void
FUNC_1(struct bfa_wc *VAR_0, bfa_wc_resume_t VAR_1, void *VAR_2)
{
 VAR_0->wc_resume = VAR_1;
 VAR_0->wc_cbarg = VAR_2;
 VAR_0->wc_count = 0;
 FUNC_0(VAR_0);
}
