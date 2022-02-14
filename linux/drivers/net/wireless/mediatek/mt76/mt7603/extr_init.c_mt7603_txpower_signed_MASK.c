
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_0)
{
 bool VAR_1 = VAR_0 & FUNC_0(6);

 if (!(VAR_0 & FUNC_0(7)))
  return 0;

 VAR_0 &= FUNC_1(5, 0);
 if (!VAR_1)
  VAR_0 = -VAR_0;

 return VAR_0;
}
