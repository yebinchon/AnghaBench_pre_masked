
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct txentry_desc {int flags; } ;
struct data_queue {TYPE_3__* rt2x00dev; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* lib; } ;
struct TYPE_4__ {int (* kick_queue ) (struct data_queue*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct data_queue*) ;
 int FUNC_1 (struct data_queue*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct data_queue *VAR_1,
          struct txentry_desc *VAR_2)
{
 if (FUNC_0(VAR_1) ||
     !FUNC_2(VAR_0, &VAR_2->flags))
  VAR_1->rt2x00dev->ops->lib->kick_queue(VAR_1);
}
