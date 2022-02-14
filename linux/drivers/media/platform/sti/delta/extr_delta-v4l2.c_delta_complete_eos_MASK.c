
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_event {int type; } ;
struct TYPE_2__ {scalar_t__ size; } ;
struct delta_frame {int flags; TYPE_1__ info; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; int fh; struct delta_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct delta_ctx*,struct delta_frame*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,struct v4l2_event const*) ;

__attribute__((used)) static void FUNC_3(struct delta_ctx *VAR_2,
          struct delta_frame *VAR_3)
{
 struct delta_dev *VAR_4 = VAR_2->dev;
 const struct v4l2_event VAR_5 = {.type = VAR_1};
 VAR_3->info.size = 0;


 VAR_3->flags |= VAR_0;


 FUNC_0(VAR_2, VAR_3, 0);


 FUNC_2(&VAR_2->fh, &VAR_5);

 FUNC_1(VAR_4->dev, "%s EOS completed\n", VAR_2->name);
}
