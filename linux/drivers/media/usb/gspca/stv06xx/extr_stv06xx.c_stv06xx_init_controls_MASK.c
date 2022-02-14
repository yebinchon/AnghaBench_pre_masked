
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {TYPE_2__* sensor; } ;
struct TYPE_3__ {int * ctrl_handler; } ;
struct gspca_dev {int ctrl_handler; TYPE_1__ vdev; } ;
struct TYPE_4__ {int (* init_controls ) (struct sd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct sd*) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 FUNC_0(VAR_1, VAR_0, "Initializing controls\n");

 VAR_1->vdev.ctrl_handler = &VAR_1->ctrl_handler;
 return VAR_2->sensor->init_controls(VAR_2);
}
