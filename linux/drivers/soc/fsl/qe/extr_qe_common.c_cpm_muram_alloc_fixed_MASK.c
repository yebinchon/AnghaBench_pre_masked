
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genpool_data_fixed {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int ,struct genpool_data_fixed*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

unsigned long FUNC_3(unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 struct genpool_data_fixed VAR_7;

 FUNC_1(&VAR_1, VAR_6);
 VAR_7.offset = VAR_3 + VAR_0;
 VAR_5 = FUNC_0(VAR_4, VAR_2,
           &VAR_7);
 FUNC_2(&VAR_1, VAR_6);
 return VAR_5;
}
