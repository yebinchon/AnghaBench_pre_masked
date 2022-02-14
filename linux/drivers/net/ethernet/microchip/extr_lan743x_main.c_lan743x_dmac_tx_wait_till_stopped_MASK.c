
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lan743x_adapter*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct lan743x_adapter *VAR_2,
          int VAR_3)
{
 int VAR_4 = 100;
 int VAR_5 = 0;

 while (VAR_4 &&
        ((VAR_5 = FUNC_0(VAR_2, VAR_3)) ==
        VAR_0)) {
  FUNC_1(1000, 20000);
  VAR_4--;
 }
 if (VAR_5 == VAR_0)
  VAR_5 = -VAR_1;
 return VAR_5;
}
