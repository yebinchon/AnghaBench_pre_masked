
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmap_batch_state {int dummy; } ;


 int FUNC_0 (int,struct mmap_batch_state*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int VAR_1, void *VAR_2)
{
 struct mmap_batch_state *VAR_3 = VAR_2;
 int *VAR_4 = VAR_0;
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4[VAR_5], VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return 0;
}
