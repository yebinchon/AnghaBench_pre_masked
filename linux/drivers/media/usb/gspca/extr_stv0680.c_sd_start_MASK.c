
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int video_mode; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1)
{
 int VAR_2;
 struct sd *VAR_3 = (struct sd *) VAR_1;

 VAR_2 = FUNC_1(VAR_1, VAR_3->video_mode);
 if (VAR_2 < 0)
  return VAR_2;

 if (FUNC_2(VAR_1, 0, 0x85, 0, 0x10) != 0x10)
  return FUNC_0(VAR_1, -VAR_0);





 if (FUNC_2(VAR_1, 1, 0x09, VAR_3->video_mode << 8, 0x0) != 0x0)
  return FUNC_0(VAR_1, -VAR_0);

 return 0;
}
