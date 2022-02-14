
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ crw_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(int VAR_5, crw_handler_t VAR_6)
{
 int VAR_7 = 0;

 if ((VAR_5 < 0) || (VAR_5 >= VAR_2))
  return -VAR_1;
 FUNC_0(&VAR_3);
 if (VAR_4[VAR_5])
  VAR_7 = -VAR_0;
 else
  VAR_4[VAR_5] = VAR_6;
 FUNC_1(&VAR_3);
 return VAR_7;
}
