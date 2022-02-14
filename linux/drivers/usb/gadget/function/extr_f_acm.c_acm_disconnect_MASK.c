
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gserial {int dummy; } ;
struct f_acm {int serial_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f_acm*) ;
 struct f_acm* FUNC_1 (struct gserial*) ;

__attribute__((used)) static void FUNC_2(struct gserial *VAR_2)
{
 struct f_acm *VAR_3 = FUNC_1(VAR_2);

 VAR_3->serial_state &= ~(VAR_1 | VAR_0);
 FUNC_0(VAR_3);
}
