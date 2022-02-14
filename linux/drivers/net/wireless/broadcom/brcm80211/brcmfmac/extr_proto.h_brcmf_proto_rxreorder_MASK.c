
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct brcmf_if {TYPE_2__* drvr; } ;
struct TYPE_4__ {TYPE_1__* proto; } ;
struct TYPE_3__ {int (* rxreorder ) (struct brcmf_if*,struct sk_buff*) ;} ;


 int FUNC_0 (struct brcmf_if*,struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_1(struct brcmf_if *VAR_0, struct sk_buff *VAR_1)
{
 VAR_0->drvr->proto->rxreorder(VAR_0, VAR_1);
}
