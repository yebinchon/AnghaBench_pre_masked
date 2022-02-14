
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_subdev {int entity; } ;
struct ipu_csi {int dummy; } ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_6__ {int width; int height; } ;
struct csi_priv {struct ipu_csi* csi; struct ipu_csi* fim; int vdev; TYPE_4__* pad; int sd; TYPE_3__ compose; TYPE_2__ crop; int * skip; TYPE_1__* frame_interval; int * cc; int * format_mbus; int csi_id; int ipu; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_5__ {int numerator; int denominator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ipu_csi*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ipu_csi*) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,int ,int ) ;
 int FUNC_4 (struct ipu_csi*) ;
 struct ipu_csi* FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int,scalar_t__,int ,int *) ;
 struct ipu_csi* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ipu_csi*) ;
 int FUNC_9 (int *,int,TYPE_4__*) ;
 int FUNC_10 (int *,char*,int ) ;
 struct csi_priv* FUNC_11 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_12(struct v4l2_subdev *VAR_7)
{
 struct csi_priv *VAR_8 = FUNC_11(VAR_7);
 struct ipu_csi *VAR_9;
 int VAR_10, VAR_11;
 u32 VAR_12;


 VAR_9 = FUNC_7(VAR_8->ipu, VAR_8->csi_id);
 if (FUNC_0(VAR_9)) {
  FUNC_10(&VAR_8->sd, "failed to get CSI%d\n", VAR_8->csi_id);
  return FUNC_1(VAR_9);
 }
 VAR_8->csi = VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_8->pad[VAR_10].flags = (VAR_10 == VAR_1) ?
   VAR_3 : VAR_4;

  VAR_12 = 0;
  if (VAR_10 != VAR_1)
   FUNC_3(&VAR_12, 0, VAR_2);


  VAR_11 = FUNC_6(&VAR_8->format_mbus[VAR_10],
           640, 480, VAR_12, VAR_5,
           &VAR_8->cc[VAR_10]);
  if (VAR_11)
   goto put_csi;


  VAR_8->frame_interval[VAR_10].numerator = 1;
  VAR_8->frame_interval[VAR_10].denominator = 30;
 }


 VAR_8->skip = &VAR_6[0];


 VAR_8->crop.width = 640;
 VAR_8->crop.height = 480;
 VAR_8->compose.width = 640;
 VAR_8->compose.height = 480;

 VAR_8->fim = FUNC_5(&VAR_8->sd);
 if (FUNC_0(VAR_8->fim)) {
  VAR_11 = FUNC_1(VAR_8->fim);
  goto put_csi;
 }

 VAR_11 = FUNC_9(&VAR_7->entity, VAR_0, VAR_8->pad);
 if (VAR_11)
  goto free_fim;

 VAR_11 = FUNC_2(VAR_8->vdev);
 if (VAR_11)
  goto free_fim;

 return 0;

free_fim:
 if (VAR_8->fim)
  FUNC_4(VAR_8->fim);
put_csi:
 FUNC_8(VAR_8->csi);
 return VAR_11;
}
