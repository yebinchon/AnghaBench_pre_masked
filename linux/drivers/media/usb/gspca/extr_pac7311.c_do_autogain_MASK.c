
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ autogain_ignore_frames; int avg_lum; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3 = FUNC_0(&VAR_2->avg_lum);
 int VAR_4, VAR_5;

 if (VAR_3 == -1)
  return;

 VAR_4 = 170;
 VAR_5 = 20;

 if (VAR_2->autogain_ignore_frames > 0)
  VAR_2->autogain_ignore_frames--;
 else if (FUNC_1(VAR_1, VAR_3,
          VAR_4, VAR_5))
  VAR_2->autogain_ignore_frames = VAR_0;
}
