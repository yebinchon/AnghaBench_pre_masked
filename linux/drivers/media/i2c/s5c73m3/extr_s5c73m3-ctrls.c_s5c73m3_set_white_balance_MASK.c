
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* auto_wb; } ;
struct s5c73m3 {TYPE_2__ ctrls; int sensor_sd; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (unsigned short const**) ;
 int VAR_0 ;






 int VAR_1 ;






 int VAR_2 ;
 int FUNC_1 (struct s5c73m3*,int ,unsigned short const) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int *,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct s5c73m3 *VAR_3, int VAR_4)
{
 static const unsigned short VAR_5[][2] = {
  { 128, 134},
  { 130, 136},
  { 129, 135},
  { 132, 138},
  { 131, 137},
  { 133, 139},
 };
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {
  if (VAR_5[VAR_6][0] != VAR_4)
   continue;

  FUNC_3(1, VAR_2, &VAR_3->sensor_sd,
    "Setting white balance to: %s\n",
    FUNC_2(VAR_3->ctrls.auto_wb->id)[VAR_6]);

  return FUNC_1(VAR_3, VAR_0, VAR_5[VAR_6][1]);
 }

 return -VAR_1;
}
