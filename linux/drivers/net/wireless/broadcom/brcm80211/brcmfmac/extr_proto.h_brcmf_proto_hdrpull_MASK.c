
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_if {int dummy; } ;
struct TYPE_2__ {int (* hdrpull ) (struct brcmf_pub*,int,struct sk_buff*,struct brcmf_if**) ;} ;


 int FUNC_0 (struct brcmf_pub*,int,struct sk_buff*,struct brcmf_if**) ;

__attribute__((used)) static inline int FUNC_1(struct brcmf_pub *VAR_0, bool VAR_1,
          struct sk_buff *VAR_2,
          struct brcmf_if **VAR_3)
{
 struct brcmf_if *VAR_4 = ((void*)0);




 if (VAR_3)
  *VAR_3 = ((void*)0);
 else
  VAR_3 = &VAR_4;
 return VAR_0->proto->hdrpull(VAR_0, VAR_1, VAR_2, VAR_3);
}
