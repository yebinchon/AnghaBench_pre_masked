
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int,void*) ;
 scalar_t__ FUNC_2 (int,void*) ;

__attribute__((used)) static inline int FUNC_3(int* VAR_0, void* VAR_1, int VAR_2)
{
 if (FUNC_2(*VAR_0 + VAR_2, VAR_1)) {
  FUNC_0(*VAR_0, VAR_1);
  (*VAR_0) -= VAR_2;
  return 1;
 }
 else {
  (*VAR_0) += VAR_2;
  FUNC_1(*VAR_0, VAR_1);
  return -1;
 }
}
