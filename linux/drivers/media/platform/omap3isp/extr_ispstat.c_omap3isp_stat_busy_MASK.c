
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ispstat {int buf_processing; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ispstat*) ;

int FUNC_1(struct ispstat *VAR_1)
{
 return FUNC_0(VAR_1) | VAR_1->buf_processing |
  (VAR_1->state != VAR_0);
}
