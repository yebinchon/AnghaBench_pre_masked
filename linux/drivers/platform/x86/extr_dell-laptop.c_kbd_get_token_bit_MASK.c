
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct calling_interface_token {int value; int location; } ;
struct calling_interface_buffer {int* output; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct calling_interface_buffer*,int ,int ,int ,int ) ;
 int FUNC_2 (struct calling_interface_buffer*,int ,int ) ;
 struct calling_interface_token* FUNC_3 (int ) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_4(u8 VAR_4)
{
 struct calling_interface_buffer VAR_5;
 struct calling_interface_token *VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_4 >= FUNC_0(VAR_3))
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_3[VAR_4]);
 if (!VAR_6)
  return -VAR_1;

 FUNC_1(&VAR_5, VAR_6->location, 0, 0, 0);
 VAR_7 = FUNC_2(&VAR_5, VAR_0, VAR_2);
 VAR_8 = VAR_5.output[1];

 if (VAR_7)
  return VAR_7;

 return (VAR_8 == VAR_6->value);
}
