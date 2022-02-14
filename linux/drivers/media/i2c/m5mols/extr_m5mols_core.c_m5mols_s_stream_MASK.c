
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_info {size_t res_type; int lock; TYPE_1__* ffmt; } ;
struct TYPE_2__ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct m5mols_info*,int ) ;
 int FUNC_2 (struct m5mols_info*) ;
 int FUNC_3 (struct m5mols_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct m5mols_info* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct m5mols_info *VAR_6 = FUNC_6(VAR_4);
 u32 VAR_7;
 int VAR_8;

 FUNC_4(&VAR_6->lock);
 VAR_7 = VAR_6->ffmt[VAR_6->res_type].code;

 if (VAR_5) {
  if (FUNC_0(VAR_7, VAR_2))
   VAR_8 = FUNC_3(VAR_6);
  else if (FUNC_0(VAR_7, VAR_1))
   VAR_8 = FUNC_2(VAR_6);
  else
   VAR_8 = -VAR_0;
 } else {
  VAR_8 = FUNC_1(VAR_6, VAR_3);
 }

 FUNC_5(&VAR_6->lock);
 return VAR_8;
}
