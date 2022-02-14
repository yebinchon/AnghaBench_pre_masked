
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_2)
{
 int VAR_3 = 0;

 VAR_1 = FUNC_2(FUNC_1(VAR_2/8, 1U), 0);
 if (!VAR_1)
  return -VAR_0;

 while (VAR_2-- && !VAR_3)
  VAR_3 = FUNC_0();

 return VAR_3;
}
