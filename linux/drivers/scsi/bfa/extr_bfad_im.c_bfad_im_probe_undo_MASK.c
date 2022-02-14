
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int * im; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct bfad_s *VAR_0)
{
 if (VAR_0->im) {
  FUNC_0(VAR_0->im);
  FUNC_1(VAR_0->im);
  VAR_0->im = ((void*)0);
 }
}
