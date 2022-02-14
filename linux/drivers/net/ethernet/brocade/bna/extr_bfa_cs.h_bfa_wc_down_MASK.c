
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_wc {scalar_t__ wc_count; int wc_cbarg; int (* wc_resume ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(struct bfa_wc *VAR_0)
{
 VAR_0->wc_count--;
 if (VAR_0->wc_count == 0)
  VAR_0->wc_resume(VAR_0->wc_cbarg);
}
