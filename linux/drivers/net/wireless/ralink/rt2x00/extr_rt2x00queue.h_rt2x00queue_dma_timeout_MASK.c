
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_entry {scalar_t__ last_action; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct queue_entry *VAR_2)
{
 if (!FUNC_1(VAR_0, &VAR_2->flags))
  return 0;
 return FUNC_2(VAR_1, VAR_2->last_action + FUNC_0(100));
}
