
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* m_pool_p ;
typedef TYPE_2__* m_link_p ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
struct TYPE_4__ {TYPE_2__* h; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,void*) ;

__attribute__((used)) static void *FUNC_2(m_pool_p VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = (1 << VAR_1);
 int VAR_6;
 void *VAR_7;
 m_link_p VAR_8 = VAR_2->h;

 if (VAR_3 > VAR_0)
  return ((void*)0);

 while (VAR_3 > VAR_5) {
  VAR_5 <<= 1;
  ++VAR_4;
 }

 VAR_6 = VAR_4;
 while (!VAR_8[VAR_6].next) {
  if (VAR_5 == VAR_0) {
   VAR_8[VAR_6].next = (m_link_p) FUNC_0();
   if (VAR_8[VAR_6].next)
    VAR_8[VAR_6].next->next = ((void*)0);
   break;
  }
  ++VAR_6;
  VAR_5 <<= 1;
 }
 VAR_7 = VAR_8[VAR_6].next;
 if (VAR_7) {
  VAR_8[VAR_6].next = VAR_8[VAR_6].next->next;
  while (VAR_6 > VAR_4) {
   VAR_6 -= 1;
   VAR_5 >>= 1;
   VAR_8[VAR_6].next = (m_link_p) (VAR_7+VAR_5);
   VAR_8[VAR_6].next->next = ((void*)0);
  }
 }



 return VAR_7;
}
