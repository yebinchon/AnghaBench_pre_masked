
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int ,int ) ;
 int FUNC_2 (int *,unsigned int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(unsigned int VAR_3)
{
 int VAR_4;

 if (VAR_3 == 0)
  return FUNC_2(&VAR_2, 0, 0, 0);

 VAR_4 = FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_1));
 if (VAR_4 < 0)
  return -VAR_0;
 return FUNC_2(&VAR_2, VAR_3, VAR_4, 0x02);
}
