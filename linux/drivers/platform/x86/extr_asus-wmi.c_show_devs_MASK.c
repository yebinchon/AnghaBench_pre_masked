
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {struct asus_wmi* private; } ;
struct TYPE_2__ {int ctrl_param; int dev_id; } ;
struct asus_wmi {TYPE_1__ debug; } ;


 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct asus_wmi *VAR_2 = VAR_0->private;
 int VAR_3;
 u32 VAR_4 = -1;

 VAR_3 = FUNC_0(VAR_2->debug.dev_id, VAR_2->debug.ctrl_param,
        &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(VAR_0, "DEVS(%#x, %#x) = %#x\n", VAR_2->debug.dev_id,
     VAR_2->debug.ctrl_param, VAR_4);

 return 0;
}
