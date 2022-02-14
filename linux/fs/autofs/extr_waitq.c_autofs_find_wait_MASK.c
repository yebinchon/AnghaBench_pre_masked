
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {scalar_t__ hash; scalar_t__ len; int name; } ;
struct TYPE_2__ {scalar_t__ hash; scalar_t__ len; scalar_t__ name; } ;
struct autofs_wait_queue {TYPE_1__ name; struct autofs_wait_queue* next; } ;
struct autofs_sb_info {struct autofs_wait_queue* queues; } ;


 int FUNC_0 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static struct autofs_wait_queue *
FUNC_1(struct autofs_sb_info *VAR_0, const struct qstr *VAR_1)
{
 struct autofs_wait_queue *VAR_2;

 for (VAR_2 = VAR_0->queues; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->name.hash == VAR_1->hash &&
      VAR_2->name.len == VAR_1->len &&
      VAR_2->name.name &&
      !FUNC_0(VAR_2->name.name, VAR_1->name, VAR_1->len))
   break;
 }
 return VAR_2;
}
