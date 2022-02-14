
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_if {int dummy; } ;
struct TYPE_2__ {int (* reset_if ) (struct brcmf_if*) ;} ;


 int FUNC_0 (struct brcmf_if*) ;

__attribute__((used)) static inline void
FUNC_1(struct brcmf_pub *VAR_0, struct brcmf_if *VAR_1)
{
 if (!VAR_0->proto->reset_if)
  return;
 VAR_0->proto->reset_if(VAR_1);
}
