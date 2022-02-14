
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_req {scalar_t__ type; struct raw3215_req* next; } ;


 scalar_t__ VAR_0 ;
 struct raw3215_req* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct raw3215_req *VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3->type == VAR_0)
  return;
 VAR_3->type = VAR_0;
 FUNC_0(&VAR_2, VAR_4);
 VAR_3->next = VAR_1;
 VAR_1 = VAR_3;
 FUNC_1(&VAR_2, VAR_4);
}
