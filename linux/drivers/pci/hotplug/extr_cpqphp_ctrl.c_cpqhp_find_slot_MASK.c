
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct slot {scalar_t__ device; struct slot* next; } ;
struct controller {struct slot* slot; } ;



__attribute__((used)) static struct slot *FUNC_0(struct controller *VAR_0, u8 VAR_1)
{
 struct slot *VAR_2 = VAR_0->slot;

 while (VAR_2 && (VAR_2->device != VAR_1))
  VAR_2 = VAR_2->next;

 return VAR_2;
}
