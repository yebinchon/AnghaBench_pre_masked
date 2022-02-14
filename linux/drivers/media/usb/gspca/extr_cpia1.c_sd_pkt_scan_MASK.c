
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int colStart; int colEnd; int rowStart; int rowEnd; } ;
struct TYPE_4__ {int videoSize; int subSample; int yuvOrder; } ;
struct TYPE_6__ {TYPE_2__ roi; TYPE_1__ format; } ;
struct sd {int fps; int cam_exposure; TYPE_3__ params; } ;
struct gspca_dev {int* image; int image_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;


 if (VAR_7 >= 64 &&
     VAR_6[0] == VAR_3 && VAR_6[1] == VAR_4 &&
     VAR_6[16] == VAR_8->params.format.videoSize &&
     VAR_6[17] == VAR_8->params.format.subSample &&
     VAR_6[18] == VAR_8->params.format.yuvOrder &&
     VAR_6[24] == VAR_8->params.roi.colStart &&
     VAR_6[25] == VAR_8->params.roi.colEnd &&
     VAR_6[26] == VAR_8->params.roi.rowStart &&
     VAR_6[27] == VAR_8->params.roi.rowEnd) {
  u8 *VAR_9;

  FUNC_0(&VAR_8->cam_exposure, VAR_6[39] * 2);
  FUNC_0(&VAR_8->fps, VAR_6[41]);


  VAR_9 = VAR_5->image;
  if (VAR_9 != ((void*)0) &&
      VAR_5->image_len > 4 &&
      VAR_9[VAR_5->image_len - 4] == 0xff &&
      VAR_9[VAR_5->image_len - 3] == 0xff &&
      VAR_9[VAR_5->image_len - 2] == 0xff &&
      VAR_9[VAR_5->image_len - 1] == 0xff)
   FUNC_1(VAR_5, VAR_2,
      ((void*)0), 0);

  FUNC_1(VAR_5, VAR_0, VAR_6, VAR_7);
  return;
 }

 FUNC_1(VAR_5, VAR_1, VAR_6, VAR_7);
}
