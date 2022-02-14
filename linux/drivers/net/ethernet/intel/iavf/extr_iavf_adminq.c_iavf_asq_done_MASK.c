
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ next_to_use; int head; } ;
struct TYPE_4__ {TYPE_1__ asq; } ;
struct iavf_hw {TYPE_2__ aq; } ;


 scalar_t__ FUNC_0 (struct iavf_hw*,int ) ;

bool FUNC_1(struct iavf_hw *VAR_0)
{



 return FUNC_0(VAR_0, VAR_0->aq.asq.head) == VAR_0->aq.asq.next_to_use;
}
