
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_heap {int flags; } ;
struct ion_buffer {struct ion_heap* heap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ion_buffer*) ;
 int FUNC_1 (struct ion_heap*,struct ion_buffer*) ;

__attribute__((used)) static void FUNC_2(struct ion_buffer *VAR_1)
{
 struct ion_heap *VAR_2 = VAR_1->heap;

 if (VAR_2->flags & VAR_0)
  FUNC_1(VAR_2, VAR_1);
 else
  FUNC_0(VAR_1);
}
