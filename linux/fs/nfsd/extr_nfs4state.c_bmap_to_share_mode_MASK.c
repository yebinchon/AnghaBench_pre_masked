
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,unsigned long*) ;

__attribute__((used)) static unsigned int
FUNC_1(unsigned long VAR_0) {
 int VAR_1;
 unsigned int VAR_2 = 0;

 for (VAR_1 = 1; VAR_1 < 4; VAR_1++) {
  if (FUNC_0(VAR_1, &VAR_0))
   VAR_2 |= VAR_1;
 }
 return VAR_2;
}
