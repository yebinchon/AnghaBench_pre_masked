
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgbi_sock {TYPE_1__* cdev; } ;
struct TYPE_2__ {int nmtus; unsigned short* mtus; } ;



__attribute__((used)) static unsigned int FUNC_0(struct cxgbi_sock *VAR_0,
          unsigned short VAR_1)
{
 int VAR_2 = 0;

 while (VAR_2 < VAR_0->cdev->nmtus - 1 && VAR_0->cdev->mtus[VAR_2 + 1] <= VAR_1)
  ++VAR_2;

 return VAR_2;
}
