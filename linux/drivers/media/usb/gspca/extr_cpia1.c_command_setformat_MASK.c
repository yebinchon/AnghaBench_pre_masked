
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rowEnd; int rowStart; int colEnd; int colStart; } ;
struct TYPE_6__ {int yuvOrder; int subSample; int videoSize; } ;
struct TYPE_5__ {TYPE_1__ roi; TYPE_3__ format; } ;
struct sd {TYPE_2__ params; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0,
    VAR_3->params.format.videoSize,
    VAR_3->params.format.subSample,
    VAR_3->params.format.yuvOrder, 0);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_1,
     VAR_3->params.roi.colStart, VAR_3->params.roi.colEnd,
     VAR_3->params.roi.rowStart, VAR_3->params.roi.rowEnd);
}
