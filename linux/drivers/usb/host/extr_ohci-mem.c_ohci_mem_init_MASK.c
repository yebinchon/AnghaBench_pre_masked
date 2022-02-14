
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct td {int dummy; } ;
struct ohci_hcd {void* td_cache; void* ed_cache; } ;
struct ed {int dummy; } ;
struct TYPE_3__ {int controller; } ;
struct TYPE_4__ {TYPE_1__ self; scalar_t__ localmem_pool; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,int ,int,int,int ) ;
 int FUNC_1 (void*) ;
 TYPE_2__* FUNC_2 (struct ohci_hcd*) ;

__attribute__((used)) static int FUNC_3 (struct ohci_hcd *VAR_1)
{




 if (FUNC_2(VAR_1)->localmem_pool)
  return 0;

 VAR_1->td_cache = FUNC_0 ("ohci_td",
  FUNC_2(VAR_1)->self.controller,
  sizeof (struct td),
  32 ,
  0 );
 if (!VAR_1->td_cache)
  return -VAR_0;
 VAR_1->ed_cache = FUNC_0 ("ohci_ed",
  FUNC_2(VAR_1)->self.controller,
  sizeof (struct ed),
  16 ,
  0 );
 if (!VAR_1->ed_cache) {
  FUNC_1 (VAR_1->td_cache);
  return -VAR_0;
 }
 return 0;
}
