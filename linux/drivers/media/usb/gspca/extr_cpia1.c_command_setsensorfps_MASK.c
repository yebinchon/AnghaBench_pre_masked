
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int baserate; int divisor; } ;
struct TYPE_4__ {TYPE_1__ sensorFps; } ;
struct sd {TYPE_2__ params; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 return FUNC_0(VAR_1, VAR_0,
     VAR_2->params.sensorFps.divisor,
     VAR_2->params.sensorFps.baserate, 0, 0);
}
