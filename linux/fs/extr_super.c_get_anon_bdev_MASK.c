
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int,int ) ;
 int VAR_4 ;

int FUNC_2(dev_t *VAR_5)
{
 int VAR_6;





 VAR_6 = FUNC_1(&VAR_4, 1, (1 << VAR_3) - 1,
   VAR_2);
 if (VAR_6 == -VAR_1)
  VAR_6 = -VAR_0;
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_5 = FUNC_0(0, VAR_6);
 return 0;
}
