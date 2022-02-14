
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* cap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{
 int VAR_3;


 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < 0x10; VAR_3++) {
  if (VAR_1->cap[VAR_3] == VAR_2) {
   FUNC_0("found handle 0x%.4x (offset: 0x%.2x)\n",
     VAR_2, VAR_3);
   return VAR_3;
  }
 }
 FUNC_0("handle 0x%.4x not found\n", VAR_2);
 return -VAR_0;
}
