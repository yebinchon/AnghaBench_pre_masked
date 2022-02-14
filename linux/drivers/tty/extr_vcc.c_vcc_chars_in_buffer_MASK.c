
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vcc_port {int chars_in_buffer; } ;
struct tty_struct {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 struct vcc_port* FUNC_2 (int ) ;
 int FUNC_3 (struct vcc_port*,int) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_2)
{
 struct vcc_port *VAR_3;
 u64 VAR_4;

 if (FUNC_1(!VAR_2)) {
  FUNC_0("VCC: chars_in_buffer: Invalid TTY handle\n");
  return -VAR_1;
 }

 VAR_3 = FUNC_2(VAR_2->index);
 if (FUNC_1(!VAR_3)) {
  FUNC_0("VCC: chars_in_buffer: Failed to find VCC port\n");
  return -VAR_0;
 }

 VAR_4 = VAR_3->chars_in_buffer;

 FUNC_3(VAR_3, 0);

 return VAR_4;
}
