
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_entry {int dummy; } ;
struct cxgbi_sock {unsigned int advmss; TYPE_1__* cdev; struct dst_entry* dst; } ;
struct TYPE_2__ {int* mtus; } ;


 unsigned int FUNC_0 (struct cxgbi_sock*,int ) ;
 unsigned int FUNC_1 (struct dst_entry*) ;

unsigned int FUNC_2(struct cxgbi_sock *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 struct dst_entry *VAR_3 = VAR_0->dst;

 VAR_0->advmss = FUNC_1(VAR_3);

 if (VAR_0->advmss > VAR_1 - 40)
  VAR_0->advmss = VAR_1 - 40;
 if (VAR_0->advmss < VAR_0->cdev->mtus[0] - 40)
  VAR_0->advmss = VAR_0->cdev->mtus[0] - 40;
 VAR_2 = FUNC_0(VAR_0, VAR_0->advmss + 40);

 return VAR_2;
}
