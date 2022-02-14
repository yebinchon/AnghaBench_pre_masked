
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct radio_isa_card {TYPE_1__ v4l2_dev; int hdl; int io; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 struct radio_isa_card* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1)
{
 struct radio_isa_card *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(&VAR_2->v4l2_dev, "I/O Port = 0x%03x\n", VAR_2->io);
 FUNC_0(&VAR_2->hdl, VAR_2->v4l2_dev.name);
 return 0;
}
