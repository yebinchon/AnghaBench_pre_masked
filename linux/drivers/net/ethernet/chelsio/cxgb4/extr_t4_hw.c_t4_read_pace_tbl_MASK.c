
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct adapter*,unsigned int) ;
 unsigned int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int) ;

void FUNC_3(struct adapter *VAR_2, unsigned int VAR_3[VAR_0])
{
 unsigned int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_2(VAR_2, VAR_1, 0xffff0000 + VAR_4);
  VAR_5 = FUNC_1(VAR_2, VAR_1);
  VAR_3[VAR_4] = FUNC_0(VAR_2, VAR_5);
 }
}
