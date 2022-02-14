
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct m5mols_info {int lock; scalar_t__ ctrl_sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct m5mols_info*,int ) ;
 int FUNC_1 (struct m5mols_info*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct m5mols_info*,int) ;
 int FUNC_4 (struct m5mols_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct m5mols_info* FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct m5mols_info *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;

 FUNC_5(&VAR_4->lock);

 if (VAR_3) {
  VAR_5 = FUNC_3(VAR_4, 1);
  if (!VAR_5)
   VAR_5 = FUNC_2(VAR_2);
 } else {
  if (FUNC_0(VAR_4, VAR_1)) {
   VAR_5 = FUNC_4(VAR_4, VAR_0);
   if (!VAR_5)
    VAR_5 = FUNC_1(VAR_4);
   if (VAR_5 < 0)
    FUNC_8(VAR_2, "Soft landing lens failed\n");
  }
  VAR_5 = FUNC_3(VAR_4, 0);

  VAR_4->ctrl_sync = 0;
 }

 FUNC_6(&VAR_4->lock);
 return VAR_5;
}
