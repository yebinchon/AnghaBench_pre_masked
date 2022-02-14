
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct acpi_buffer {int pointer; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct acpi_buffer VAR_5)
{
 struct acpi_buffer VAR_6;
 u64 VAR_7;
 u32 VAR_8;
 u32 VAR_9 = -1;





 VAR_6.pointer = FUNC_2(VAR_5.pointer, VAR_5.length, VAR_3 | VAR_4);
 VAR_6.length = VAR_5.length;
 if (!VAR_6.pointer)
  return -VAR_1;
 VAR_7 = FUNC_4(VAR_6.pointer);

 VAR_9 = FUNC_0(VAR_0,
     VAR_7, 0, &VAR_8);
 if (!VAR_9)
  FUNC_3(VAR_5.pointer, VAR_6.pointer, VAR_5.length);

 FUNC_1(VAR_6.pointer);
 if (VAR_9)
  return -VAR_2;

 return VAR_8;
}
