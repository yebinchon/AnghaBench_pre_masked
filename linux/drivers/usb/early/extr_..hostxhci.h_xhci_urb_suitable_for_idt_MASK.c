
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ transfer_buffer_length; int transfer_flags; int num_sgs; TYPE_1__* ep; } ;
struct TYPE_2__ {int desc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct urb*) ;

__attribute__((used)) static inline bool FUNC_3(struct urb *VAR_2)
{
 if (!FUNC_1(&VAR_2->ep->desc) && FUNC_2(VAR_2) &&
     FUNC_0(&VAR_2->ep->desc) >= VAR_0 &&
     VAR_2->transfer_buffer_length <= VAR_0 &&
     !(VAR_2->transfer_flags & VAR_1) &&
     !VAR_2->num_sgs)
  return 1;

 return 0;
}
