
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_core {scalar_t__ base; scalar_t__ use_tz; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct venus_core*) ;
 int FUNC_2 (int,scalar_t__) ;

int FUNC_3(struct venus_core *VAR_1, bool VAR_2)
{
 if (VAR_1->use_tz)
  return FUNC_0(VAR_2, 0);

 if (VAR_2)
  FUNC_1(VAR_1);
 else
  FUNC_2(1, VAR_1->base + VAR_0);

 return 0;
}
