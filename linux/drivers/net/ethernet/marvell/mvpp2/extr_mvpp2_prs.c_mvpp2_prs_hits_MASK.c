
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mvpp2*,int ) ;
 int FUNC_1 (struct mvpp2*,int ,int) ;

int FUNC_2(struct mvpp2 *VAR_5, int VAR_6)
{
 u32 VAR_7;

 if (VAR_6 > VAR_4)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_3, VAR_6);

 VAR_7 = FUNC_0(VAR_5, VAR_2);

 VAR_7 &= VAR_1;

 return VAR_7;
}
