
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_cmd {int ecx; int ebx; int command_code; int command_address; int magic; } ;
struct calling_interface_buffer {int dummy; } ;


 int VAR_0 ;
 struct calling_interface_buffer* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smi_cmd*) ;
 int FUNC_1 (struct calling_interface_buffer*,struct calling_interface_buffer*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (struct calling_interface_buffer*) ;

__attribute__((used)) static int FUNC_5(struct calling_interface_buffer *VAR_5)
{
 struct smi_cmd VAR_6;
 size_t VAR_7;

 VAR_7 = sizeof(struct calling_interface_buffer);
 VAR_6.magic = VAR_0;
 VAR_6.command_address = VAR_2;
 VAR_6.command_code = VAR_3;
 VAR_6.ebx = FUNC_4(VAR_1);
 VAR_6.ecx = 0x42534931;

 FUNC_2(&VAR_4);
 FUNC_1(VAR_1, VAR_5, VAR_7);
 FUNC_0(&VAR_6);
 FUNC_1(VAR_5, VAR_1, VAR_7);
 FUNC_3(&VAR_4);
 return 0;
}
