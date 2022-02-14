
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int present; } ;
struct sd {int orig_mode; TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (!VAR_1->gspca_dev.present)
  return;

 FUNC_0(VAR_0, VAR_1->orig_mode);
}
