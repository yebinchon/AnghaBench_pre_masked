
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {scalar_t__ num_consecutive_zeros; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct rbsp*,int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct rbsp *VAR_2)
{
 unsigned int VAR_3 = 0;

 VAR_2->num_consecutive_zeros = 0;
 FUNC_0(VAR_2, 8, &VAR_3);
 if (VAR_3 != VAR_1)
  return -VAR_0;

 return 0;
}
