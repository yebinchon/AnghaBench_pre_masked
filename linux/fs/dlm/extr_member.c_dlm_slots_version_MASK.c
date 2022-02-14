
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_header {int h_version; } ;


 int VAR_0 ;

int FUNC_0(struct dlm_header *VAR_1)
{
 if ((VAR_1->h_version & 0x0000FFFF) < VAR_0)
  return 0;
 return 1;
}
