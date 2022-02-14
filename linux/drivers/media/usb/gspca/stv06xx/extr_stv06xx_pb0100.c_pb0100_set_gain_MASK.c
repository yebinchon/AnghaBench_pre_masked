
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {struct pb0100_ctrls* sensor_priv; } ;
struct pb0100_ctrls {TYPE_2__* blue; TYPE_1__* red; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 int FUNC_2 (struct gspca_dev*,int ) ;
 int FUNC_3 (struct sd*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_3, __s32 VAR_4)
{
 int VAR_5;
 struct sd *VAR_6 = (struct sd *) VAR_3;
 struct pb0100_ctrls *VAR_7 = VAR_6->sensor_priv;

 VAR_5 = FUNC_3(VAR_6, VAR_1, VAR_4);
 if (!VAR_5)
  VAR_5 = FUNC_3(VAR_6, VAR_2, VAR_4);
 FUNC_0(VAR_3, VAR_0, "Set green gain to %d, status: %d\n",
    VAR_4, VAR_5);

 if (!VAR_5)
  VAR_5 = FUNC_2(VAR_3, VAR_7->red->val);
 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_3, VAR_7->blue->val);

 return VAR_5;
}
