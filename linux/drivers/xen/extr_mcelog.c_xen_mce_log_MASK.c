
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_mce {int dummy; } ;
struct TYPE_2__ {unsigned int next; unsigned int entry; int flags; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,struct xen_mce*,int) ;
 int FUNC_1 (int ,unsigned long*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct xen_mce *VAR_3)
{
 unsigned VAR_4;

 VAR_4 = VAR_2.next;






 if (VAR_4 >= VAR_0) {
  FUNC_1(VAR_1,
   (unsigned long *)&VAR_2.flags);
  return;
 }

 FUNC_0(VAR_2.entry + VAR_4, VAR_3, sizeof(struct xen_mce));

 VAR_2.next++;
}
