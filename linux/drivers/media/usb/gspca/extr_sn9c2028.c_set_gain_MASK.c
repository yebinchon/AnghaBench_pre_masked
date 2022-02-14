
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int model; } ;
struct TYPE_2__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; } ;
struct init_command {int * instruction; int member_1; TYPE_1__ member_0; } ;
struct gspca_dev {int streaming; } ;
typedef int s32 ;


 int FUNC_0 (struct init_command*) ;
 int FUNC_1 (struct gspca_dev*,struct init_command*,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 struct init_command VAR_3[] = {
  {{0x1d, 0x25, 0x10 ,
    0x20, 0xab, 0x00}, 0},
 };
 if (!VAR_0->streaming)
  return;

 switch (VAR_2->model) {
 case 0x7003:
  VAR_3[0].instruction[2] = VAR_1;
  FUNC_1(VAR_0, VAR_3,
       FUNC_0(VAR_3));
  break;
 default:
  break;
 }
}
