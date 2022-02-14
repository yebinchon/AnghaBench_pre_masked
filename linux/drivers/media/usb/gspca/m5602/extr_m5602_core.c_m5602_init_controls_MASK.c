
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* sensor; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int (* init_controls ) (struct sd*) ;} ;


 int FUNC_0 (struct sd*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (!VAR_1->sensor->init_controls)
  return 0;

 return VAR_1->sensor->init_controls(VAR_1);
}
