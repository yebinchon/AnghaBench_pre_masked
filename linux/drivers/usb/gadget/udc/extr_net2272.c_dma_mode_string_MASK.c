
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_0(void)
{
 if (!VAR_1)
  return "PIO";
 switch (VAR_0) {
 case 0: return "SLOW DREQ";
 case 1: return "FAST DREQ";
 case 2: return "BURST";
 default: return "invalid";
 }
}
