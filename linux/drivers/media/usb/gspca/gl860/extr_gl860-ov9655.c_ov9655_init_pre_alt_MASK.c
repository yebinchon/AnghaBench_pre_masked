
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; int hue; } ;
struct sd {TYPE_1__ vold; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct gspca_dev*,int ,int ) ;
 int FUNC_2 (struct gspca_dev*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 VAR_2->vold.brightness = -1;
 VAR_2->vold.hue = -1;

 FUNC_1(VAR_1, VAR_0, FUNC_0(VAR_0));

 FUNC_2(VAR_1);

 return 0;
}
