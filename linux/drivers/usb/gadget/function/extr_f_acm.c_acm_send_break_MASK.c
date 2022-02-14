
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gserial {int dummy; } ;
struct f_acm {int serial_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct f_acm*) ;
 struct f_acm* FUNC_1 (struct gserial*) ;

__attribute__((used)) static int FUNC_2(struct gserial *VAR_1, int VAR_2)
{
 struct f_acm *VAR_3 = FUNC_1(VAR_1);
 u16 VAR_4;

 VAR_4 = VAR_3->serial_state;
 VAR_4 &= ~VAR_0;
 if (VAR_2)
  VAR_4 |= VAR_0;

 VAR_3->serial_state = VAR_4;
 return FUNC_0(VAR_3);
}
