
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int present; } ;
struct sd {void (* dev_post_unset_alt ) (struct gspca_dev*) ;TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;


 void FUNC_0 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (!VAR_1->gspca_dev.present)
  return;

 return VAR_1->dev_post_unset_alt(VAR_0);
}
