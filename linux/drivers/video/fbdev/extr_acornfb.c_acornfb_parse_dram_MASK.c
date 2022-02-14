
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int dram_size; } ;


 TYPE_1__ VAR_0 ;
 unsigned int FUNC_0 (char*,char**,int ) ;

__attribute__((used)) static void FUNC_1(char *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_1, 0);

 if (VAR_1) {
  switch (*VAR_1) {
  case 'M':
  case 'm':
   VAR_2 *= 1024;

  case 'K':
  case 'k':
   VAR_2 *= 1024;
  default:
   break;
  }
 }

 VAR_0.dram_size = VAR_2;
}
