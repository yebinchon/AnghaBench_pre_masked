
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;

int FUNC_2(int VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (VAR_6 < VAR_3 || VAR_6 >= VAR_2)
  return -VAR_1;

 FUNC_0(&VAR_5, VAR_7);
 if (VAR_4[VAR_6]->refcount)
  VAR_8 = -VAR_0;
 else
  VAR_4[VAR_6] = ((void*)0);
 FUNC_1(&VAR_5, VAR_7);

 return VAR_8;
}
