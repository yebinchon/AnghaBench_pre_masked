
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct hl_device *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_6 =
  ((VAR_3 - VAR_2) + 4);

 VAR_7 =
  ((VAR_1 - VAR_0) + 4);

 for (VAR_5 = 0 ; VAR_5 < VAR_6 ; VAR_5 += 4)
  FUNC_1(VAR_2 + VAR_5, 0);

 for (VAR_5 = 0 ; VAR_5 < VAR_7 ; VAR_5 += 4)
  FUNC_1(VAR_0 + VAR_5, 0);


 VAR_5 = FUNC_0(VAR_2);
}
