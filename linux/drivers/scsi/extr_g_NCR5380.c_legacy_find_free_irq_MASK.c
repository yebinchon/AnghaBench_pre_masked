
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,void*) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_2(int *VAR_2)
{
 while (*VAR_2 != -1) {
  if (!FUNC_1(*VAR_2, VAR_1,
                   VAR_0, "Test IRQ",
                   (void *)VAR_2)) {
   FUNC_0(*VAR_2, (void *) VAR_2);
   return *VAR_2;
  }
  VAR_2++;
 }
 return -1;
}
