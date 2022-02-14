
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int resetlevel_frame_count; int resetlevel; int resetlevel_adjust_dir; scalar_t__ restart_stream; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*,int ) ;
 int FUNC_3 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *)VAR_5;
 unsigned int VAR_7, VAR_8;
 int VAR_9, VAR_10;


 if (VAR_6->restart_stream) {
  FUNC_1(VAR_5);
  FUNC_0(VAR_5);
  VAR_6->restart_stream = 0;
 }




 VAR_6->resetlevel_frame_count++;
 if (VAR_6->resetlevel_frame_count < 20)
  return;



 FUNC_2(VAR_5, VAR_1);
 FUNC_2(VAR_5, VAR_2);
 FUNC_2(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_4);
 VAR_7 = 256*FUNC_2(VAR_5, VAR_1) +
     FUNC_2(VAR_5, VAR_2);
 VAR_8 = 256*FUNC_2(VAR_5, VAR_3) +
     FUNC_2(VAR_5, VAR_4);


 VAR_9 = VAR_6->resetlevel;
 if (VAR_8 > 10) {
  while (VAR_8 >= 10 && VAR_6->resetlevel < 63) {
   VAR_6->resetlevel++;
   VAR_8 /= 2;
  }
 } else if (VAR_7 > 20) {
  while (VAR_7 >= 20 && VAR_6->resetlevel > 0) {
   VAR_6->resetlevel--;
   VAR_7 /= 2;
  }
 }

 if (VAR_6->resetlevel > VAR_9)
  VAR_10 = 1;
 else
  VAR_10 = -1;
 if (VAR_6->resetlevel_adjust_dir &&
     VAR_6->resetlevel_adjust_dir != VAR_10)
  VAR_6->resetlevel = VAR_9 + (VAR_6->resetlevel - VAR_9) / 2;

 if (VAR_6->resetlevel != VAR_9) {
  VAR_6->resetlevel_adjust_dir = VAR_10;
  FUNC_3(VAR_5, VAR_0, VAR_6->resetlevel);
 }

 VAR_6->resetlevel_frame_count = 0;
}
