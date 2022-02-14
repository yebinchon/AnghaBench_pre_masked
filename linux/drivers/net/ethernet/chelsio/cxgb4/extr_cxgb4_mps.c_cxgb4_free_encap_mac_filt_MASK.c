
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct adapter*,unsigned int,int,int) ;

int FUNC_2(struct adapter *VAR_0, unsigned int VAR_1,
         int VAR_2, bool VAR_3)
{
 int VAR_4 = 0;

 if (!FUNC_0(VAR_0, VAR_2))
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
