
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct list_head {struct list_head* next; } ;


 int FUNC_0 (struct list_head*,struct list_head*) ;
 int FUNC_1 (struct list_head*) ;

__attribute__((used)) static void FUNC_2(struct list_head *VAR_0, uint32_t VAR_1)
{
 struct list_head *VAR_2 = VAR_0->next;

 FUNC_1(VAR_0);
 while(VAR_1--) {
  VAR_2 = VAR_2->next;
 }
 FUNC_0(VAR_0, VAR_2);
}
