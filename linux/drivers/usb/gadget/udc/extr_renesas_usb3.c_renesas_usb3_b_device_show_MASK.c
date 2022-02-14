
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct renesas_usb3* private; } ;
struct renesas_usb3 {int forced_b_device; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct renesas_usb3 *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "%d\n", VAR_2->forced_b_device);

 return 0;
}
