
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(unsigned VAR_0, int VAR_1)
{
 switch (VAR_0) {
 case 8:
  return (VAR_1 >> 4);
 case 16:
  return (VAR_1 >> 3);
 case 32:
  return (VAR_1 >> 2);
 }
 FUNC_0("Unsupported depth %u\n", VAR_0);
 return 0;
}
