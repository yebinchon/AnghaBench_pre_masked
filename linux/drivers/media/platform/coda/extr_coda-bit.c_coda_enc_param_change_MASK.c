
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct coda_dev {int dummy; } ;
struct TYPE_2__ {int gop_size_changed; int gop_size; int h264_intra_qp_changed; int h264_intra_qp; int bitrate; int bitrate_changed; int framerate_changed; int framerate; int intra_refresh_changed; int intra_refresh; int slice_mode_changed; } ;
struct coda_ctx {TYPE_1__ params; scalar_t__ gopcounter; struct coda_dev* dev; } ;


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
 int FUNC_0 (struct coda_ctx*,int ) ;
 int FUNC_1 (int,struct coda_ctx*,char*,int,...) ;
 int FUNC_2 (struct coda_dev*,int ) ;
 int FUNC_3 (struct coda_ctx*) ;
 int FUNC_4 (struct coda_dev*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct coda_ctx *VAR_15)
{
 struct coda_dev *VAR_16 = VAR_15->dev;
 u32 VAR_17 = 0;
 u32 VAR_18;
 int VAR_19;

 if (VAR_15->params.gop_size_changed) {
  VAR_17 |= VAR_11;
  FUNC_4(VAR_16, VAR_15->params.gop_size,
      VAR_4);
  VAR_15->gopcounter = VAR_15->params.gop_size - 1;
  VAR_15->params.gop_size_changed = 0;
 }
 if (VAR_15->params.h264_intra_qp_changed) {
  FUNC_1(1, VAR_15, "parameter change: intra Qp %u\n",
    VAR_15->params.h264_intra_qp);

  if (VAR_15->params.bitrate) {
   VAR_17 |= VAR_12;
   FUNC_4(VAR_16, VAR_15->params.h264_intra_qp,
       VAR_5);
  }
  VAR_15->params.h264_intra_qp_changed = 0;
 }
 if (VAR_15->params.bitrate_changed) {
  FUNC_1(1, VAR_15, "parameter change: bitrate %u kbit/s\n",
    VAR_15->params.bitrate);
  VAR_17 |= VAR_9;
  FUNC_4(VAR_16, VAR_15->params.bitrate,
      VAR_2);
  VAR_15->params.bitrate_changed = 0;
 }
 if (VAR_15->params.framerate_changed) {
  FUNC_1(1, VAR_15, "parameter change: frame rate %u/%u Hz\n",
    VAR_15->params.framerate & 0xffff,
    (VAR_15->params.framerate >> 16) + 1);
  VAR_17 |= VAR_10;
  FUNC_4(VAR_16, VAR_15->params.framerate,
      VAR_3);
  VAR_15->params.framerate_changed = 0;
 }
 if (VAR_15->params.intra_refresh_changed) {
  FUNC_1(1, VAR_15, "parameter change: intra refresh MBs %u\n",
    VAR_15->params.intra_refresh);
  VAR_17 |= VAR_8;
  FUNC_4(VAR_16, VAR_15->params.intra_refresh,
      VAR_1);
  VAR_15->params.intra_refresh_changed = 0;
 }
 if (VAR_15->params.slice_mode_changed) {
  VAR_17 |= VAR_13;
  FUNC_4(VAR_16, FUNC_3(VAR_15),
      VAR_6);
  VAR_15->params.slice_mode_changed = 0;
 }

 if (!VAR_17)
  return 0;

 FUNC_4(VAR_16, VAR_17, VAR_0);

 VAR_19 = FUNC_0(VAR_15, VAR_7);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_18 = FUNC_2(VAR_16, VAR_14);
 if (VAR_18 != 1)
  FUNC_1(1, VAR_15, "parameter change failed: %u\n", VAR_18);

 return 0;
}
