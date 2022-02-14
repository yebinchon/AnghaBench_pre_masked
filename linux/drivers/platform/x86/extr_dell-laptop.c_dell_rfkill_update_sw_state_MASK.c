
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct calling_interface_buffer {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct calling_interface_buffer*,int,int ,int ,int ) ;
 int FUNC_2 (struct calling_interface_buffer*,int ,int ) ;
 int FUNC_3 (struct rfkill*) ;
 int FUNC_4 (struct rfkill*,int) ;

__attribute__((used)) static void FUNC_5(struct rfkill *VAR_2, int VAR_3,
     int VAR_4)
{
 if (VAR_4 & FUNC_0(0)) {

  struct calling_interface_buffer VAR_5;
  int VAR_6 = FUNC_3(VAR_2);
  FUNC_1(&VAR_5,
       1 | (VAR_3 << 8) | (VAR_6 << 16), 0, 0, 0);
  FUNC_2(&VAR_5, VAR_0, VAR_1);
 } else {

  FUNC_4(VAR_2, !!(VAR_4 & FUNC_0(VAR_3 + 16)));
 }
}
