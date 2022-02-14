
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct msg_sender {TYPE_1__ list; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(struct msg_sender *VAR_0)
{
 if (VAR_0->list.next)
  FUNC_0(&VAR_0->list);
}
