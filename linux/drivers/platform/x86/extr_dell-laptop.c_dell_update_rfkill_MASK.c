
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct calling_interface_buffer {int* output; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct calling_interface_buffer*,int,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int,int,int) ;
 int FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (struct calling_interface_buffer*,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_5)
{
 struct calling_interface_buffer VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;

 FUNC_1(&VAR_6, 0, 0, 0, 0);
 VAR_9 = FUNC_4(&VAR_6, VAR_0, VAR_1);
 VAR_8 = VAR_6.output[1];

 if (VAR_9 != 0)
  return;

 FUNC_1(&VAR_6, 0x2, 0, 0, 0);
 VAR_9 = FUNC_4(&VAR_6, VAR_0, VAR_1);

 if (VAR_9 == 0 && (VAR_8 & FUNC_0(0)))
  VAR_7 = VAR_6.output[1];

 if (VAR_3) {
  FUNC_2(VAR_3, 1, VAR_8, VAR_7);
  FUNC_3(VAR_3, 1, VAR_8);
 }
 if (VAR_2) {
  FUNC_2(VAR_2, 2, VAR_8,
         VAR_7);
  FUNC_3(VAR_2, 2, VAR_8);
 }
 if (VAR_4) {
  FUNC_2(VAR_4, 3, VAR_8, VAR_7);
  FUNC_3(VAR_4, 3, VAR_8);
 }
}
