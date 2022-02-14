
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct hva_dev* private; } ;
struct TYPE_3__ {int name; } ;
struct hva_dev {TYPE_2__* vdev; TYPE_1__ v4l2_dev; } ;
struct TYPE_4__ {int num; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct hva_dev *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "[%s]\n", VAR_2->v4l2_dev.name);
 FUNC_0(VAR_0, "registered as /dev/video%d\n", VAR_2->vdev->num);

 return 0;
}
