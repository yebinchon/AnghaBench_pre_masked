
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_0, char *VAR_1)
{
 if ((*VAR_1 == 'M') || (*VAR_1 == 'm')) {
  return(VAR_0 * 1024 * 1024);
 } else if ((*VAR_1 == 'K') || (*VAR_1 == 'k')) {
  return(VAR_0 * 1024);
 }
 return(VAR_0);
}
