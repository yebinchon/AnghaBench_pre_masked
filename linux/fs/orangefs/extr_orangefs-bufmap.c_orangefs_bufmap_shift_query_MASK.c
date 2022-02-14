
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_bufmap {int desc_shift; } ;


 struct orangefs_bufmap* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(void)
{
 struct orangefs_bufmap *VAR_2;
 int VAR_3 = 0;
 FUNC_0(&VAR_1);
 VAR_2 = VAR_0;
 if (VAR_2)
  VAR_3 = VAR_2->desc_shift;
 FUNC_1(&VAR_1);
 return VAR_3;
}
