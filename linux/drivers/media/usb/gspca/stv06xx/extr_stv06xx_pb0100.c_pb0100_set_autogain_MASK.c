
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {struct pb0100_ctrls* sensor_priv; } ;
struct pb0100_ctrls {TYPE_1__* natural; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;
struct TYPE_2__ {scalar_t__ val; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,scalar_t__,int) ;
 int FUNC_2 (struct sd*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_2, __s32 VAR_3)
{
 int VAR_4;
 struct sd *VAR_5 = (struct sd *) VAR_2;
 struct pb0100_ctrls *VAR_6 = VAR_5->sensor_priv;

 if (VAR_3) {
  if (VAR_6->natural->val)
   VAR_3 = FUNC_0(6)|FUNC_0(4)|FUNC_0(0);
  else
   VAR_3 = FUNC_0(4)|FUNC_0(0);
 } else
  VAR_3 = 0;

 VAR_4 = FUNC_2(VAR_5, VAR_1, VAR_3);
 FUNC_1(VAR_2, VAR_0, "Set autogain to %d (natural: %d), status: %d\n",
    VAR_3, VAR_6->natural->val, VAR_4);

 return VAR_4;
}
