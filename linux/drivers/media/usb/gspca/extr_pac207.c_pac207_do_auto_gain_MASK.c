
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ autogain_ignore_frames; int avg_lum; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct gspca_dev*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4 = FUNC_0(&VAR_3->avg_lum);

 if (VAR_4 == -1)
  return;

 if (VAR_3->autogain_ignore_frames > 0)
  VAR_3->autogain_ignore_frames--;
 else if (FUNC_1(VAR_2, VAR_4,
   90, VAR_0))
  VAR_3->autogain_ignore_frames = VAR_1;
}
