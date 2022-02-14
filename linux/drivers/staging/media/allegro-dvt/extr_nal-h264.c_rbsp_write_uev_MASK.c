
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct rbsp*,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct rbsp *VAR_1, unsigned int *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_0(*VAR_2 + 1);

 VAR_3 = FUNC_1(VAR_1, VAR_4, 0);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_1, VAR_4 + 1, *VAR_2 + 1);
}
