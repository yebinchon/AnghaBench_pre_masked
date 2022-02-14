
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_7)
{
 static int VAR_8;

 if (VAR_8 != VAR_6) {
  VAR_8 = VAR_6;
  FUNC_0(VAR_4, VAR_1);
  FUNC_1(&VAR_5, VAR_3 + VAR_0 / 4);
 } else
  FUNC_0(VAR_4, VAR_2);
}
