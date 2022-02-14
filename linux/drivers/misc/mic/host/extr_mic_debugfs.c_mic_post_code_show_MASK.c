
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {struct mic_device* private; } ;
struct mic_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_postcode ) (struct mic_device*) ;} ;


 int FUNC_0 (struct seq_file*,char*,int,int) ;
 int FUNC_1 (struct mic_device*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct mic_device *VAR_2 = VAR_0->private;
 u32 VAR_3 = VAR_2->ops->get_postcode(VAR_2);

 FUNC_0(VAR_0, "%c%c", VAR_3 & 0xff, (VAR_3 >> 8) & 0xff);
 return 0;
}
