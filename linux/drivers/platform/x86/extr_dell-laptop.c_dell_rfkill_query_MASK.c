
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct calling_interface_buffer {int* output; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct calling_interface_buffer*,int,int ,int ,int ) ;
 int FUNC_2 (struct rfkill*,int,int,int) ;
 int FUNC_3 (struct calling_interface_buffer*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rfkill *VAR_2, void *VAR_3)
{
 int VAR_4 = ((unsigned long)VAR_3 & 0xF);
 struct calling_interface_buffer VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_1(&VAR_5, 0, 0, 0, 0);
 VAR_8 = FUNC_3(&VAR_5, VAR_0, VAR_1);
 VAR_7 = VAR_5.output[1];

 if (VAR_8 != 0 || !(VAR_7 & FUNC_0(0))) {
  return;
 }

 FUNC_1(&VAR_5, 0x2, 0, 0, 0);
 VAR_8 = FUNC_3(&VAR_5, VAR_0, VAR_1);
 VAR_6 = VAR_5.output[1];

 if (VAR_8 != 0)
  return;

 FUNC_2(VAR_2, VAR_4, VAR_7, VAR_6);
}
