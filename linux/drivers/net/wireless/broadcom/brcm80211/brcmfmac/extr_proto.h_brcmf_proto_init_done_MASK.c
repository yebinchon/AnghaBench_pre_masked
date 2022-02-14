
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pub {TYPE_1__* proto; } ;
struct TYPE_2__ {int (* init_done ) (struct brcmf_pub*) ;} ;


 int FUNC_0 (struct brcmf_pub*) ;

__attribute__((used)) static inline int
FUNC_1(struct brcmf_pub *VAR_0)
{
 if (!VAR_0->proto->init_done)
  return 0;
 return VAR_0->proto->init_done(VAR_0);
}
