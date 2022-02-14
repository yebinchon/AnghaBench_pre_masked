
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genpool_data_align {unsigned long align; } ;


 unsigned long FUNC_0 (unsigned long,int ,struct genpool_data_align*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

unsigned long FUNC_3(unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 struct genpool_data_align VAR_6;

 FUNC_1(&VAR_0, VAR_5);
 VAR_6.align = VAR_3;
 VAR_4 = FUNC_0(VAR_2, VAR_1,
           &VAR_6);
 FUNC_2(&VAR_0, VAR_5);
 return VAR_4;
}
