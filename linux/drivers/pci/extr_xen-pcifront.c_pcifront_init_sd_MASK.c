
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int domain; int node; } ;
struct pcifront_sd {struct pcifront_device* pdev; TYPE_1__ sd; } ;
struct pcifront_device {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct pcifront_sd *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        struct pcifront_device *VAR_4)
{

 VAR_1->sd.node = VAR_0;
 VAR_1->sd.domain = VAR_2;
 VAR_1->pdev = VAR_4;
}
