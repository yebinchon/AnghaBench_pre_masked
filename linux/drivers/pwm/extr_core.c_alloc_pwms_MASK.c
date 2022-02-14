
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ,int,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = 0;
 unsigned int VAR_8;

 if (VAR_5 >= VAR_3)
  return -VAR_1;

 if (VAR_5 >= 0)
  VAR_7 = VAR_5;

 VAR_8 = FUNC_0(VAR_4, VAR_3, VAR_7,
        VAR_6, 0);

 if (VAR_5 >= 0 && VAR_8 != VAR_5)
  return -VAR_0;

 if (VAR_8 + VAR_6 > VAR_3)
  return -VAR_2;

 return VAR_8;
}
