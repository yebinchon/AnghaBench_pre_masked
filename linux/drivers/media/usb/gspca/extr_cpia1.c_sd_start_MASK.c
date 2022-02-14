
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int colStart; int rowStart; int colEnd; int rowEnd; } ;
struct TYPE_13__ {int videoSize; } ;
struct TYPE_10__ {scalar_t__ systemState; int vpStatus; scalar_t__ fatalError; } ;
struct TYPE_9__ {scalar_t__ firmwareVersion; } ;
struct TYPE_16__ {int streamStartLine; TYPE_6__ roi; TYPE_5__ format; TYPE_2__ status; TYPE_1__ version; } ;
struct sd {int first_frame; int fps; int cam_exposure; scalar_t__ exposure_count; int exposure_status; TYPE_8__ params; } ;
struct TYPE_15__ {int width; int height; } ;
struct TYPE_12__ {TYPE_3__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; TYPE_7__ pixfmt; TYPE_4__ cam; } ;
struct TYPE_11__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*) ;
 int FUNC_12 (struct gspca_dev*) ;
 int FUNC_13 (struct gspca_dev*) ;
 int FUNC_14 (struct gspca_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_15 (struct gspca_dev*) ;
 int FUNC_16 (struct gspca_dev*) ;
 int FUNC_17 (struct gspca_dev*) ;
 int FUNC_18 (struct gspca_dev*,char*,scalar_t__,...) ;
 int FUNC_19 (struct gspca_dev*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_20(struct gspca_dev *VAR_17)
{
 struct sd *VAR_18 = (struct sd *) VAR_17;
 int VAR_19, VAR_20;


 if (FUNC_17(VAR_17)) {
  if (VAR_18->params.status.systemState != VAR_16) {
   FUNC_18(VAR_17, "unexpected systemstate: %02x\n",
      VAR_18->params.status.systemState);
   FUNC_19(VAR_17, &VAR_18->params);
   return -VAR_9;
  }


  VAR_20 = FUNC_16(VAR_17);
  if (VAR_20)
   return VAR_20;

  VAR_20 = FUNC_14(VAR_17, VAR_0,
     0, 0, 0, 0);
  if (VAR_20)
   return VAR_20;

  VAR_20 = FUNC_17(VAR_17);
  if (VAR_20)
   return VAR_20;
 }




 VAR_18->params.version.firmwareVersion = 0;
 FUNC_15(VAR_17);






 VAR_20 = FUNC_14(VAR_17, VAR_3,
    VAR_12, 0, VAR_13, 0);
 if (VAR_20)
  return VAR_20;


 VAR_20 = FUNC_16(VAR_17);
 if (VAR_20)
  return VAR_20;


 VAR_20 = FUNC_14(VAR_17, VAR_1, 0, 0, 0, 0);
 if (VAR_20)
  return VAR_20;

 if (VAR_18->params.status.fatalError) {
  FUNC_18(VAR_17, "fatal_error: %04x, vp_status: %04x\n",
     VAR_18->params.status.fatalError,
     VAR_18->params.status.vpStatus);
  return -VAR_8;
 }



 VAR_20 = FUNC_14(VAR_17, VAR_2, 0, 0, 0, 0);
 if (VAR_20)
  return VAR_20;


 VAR_18->params.streamStartLine = 120;

 VAR_19 = VAR_17->cam.cam_mode[VAR_17->curr_mode].priv;
 if (VAR_19 & 0x01) {
  VAR_18->params.roi.colStart = 2;
  VAR_18->params.roi.rowStart = 6;
 } else {
  VAR_18->params.roi.colStart = 0;
  VAR_18->params.roi.rowStart = 0;
 }

 if (VAR_19 & 0x02) {
  VAR_18->params.format.videoSize = VAR_15;
  VAR_18->params.roi.colStart /= 2;
  VAR_18->params.roi.rowStart /= 2;
  VAR_18->params.streamStartLine /= 2;
 } else
  VAR_18->params.format.videoSize = VAR_14;

 VAR_18->params.roi.colEnd = VAR_18->params.roi.colStart +
    (VAR_17->pixfmt.width >> 3);
 VAR_18->params.roi.rowEnd = VAR_18->params.roi.rowStart +
    (VAR_17->pixfmt.height >> 2);


 VAR_20 = FUNC_14(VAR_17, VAR_5,
    VAR_7, 0, 0, 0);
 if (VAR_20)
  return VAR_20;


 VAR_20 = FUNC_14(VAR_17, VAR_4,
    VAR_6,
    VAR_11, 0, 0);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_6(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_4(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_10(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_13(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_7(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_5(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_8(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_3(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_11(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_2(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_9(VAR_17);
 if (VAR_20)
  return VAR_20;
 VAR_20 = FUNC_12(VAR_17);
 if (VAR_20)
  return VAR_20;


 VAR_20 = FUNC_1(VAR_17);
 if (VAR_20)
  return VAR_20;



 VAR_18->first_frame = 6;
 VAR_18->exposure_status = VAR_10;
 VAR_18->exposure_count = 0;
 FUNC_0(&VAR_18->cam_exposure, 0);
 FUNC_0(&VAR_18->fps, 0);

 return 0;
}
