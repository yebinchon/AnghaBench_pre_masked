
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int role_work; int role; scalar_t__ role_sw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct renesas_usb3*,int) ;

__attribute__((used)) static void FUNC_2(struct renesas_usb3 *VAR_2, bool VAR_3)
{
 if (VAR_2->role_sw) {
  VAR_2->role = VAR_3 ? VAR_1 : VAR_0;
  FUNC_0(&VAR_2->role_work);
 } else {
  FUNC_1(VAR_2, VAR_3);
 }
}
