
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timestamp; } ;
struct vb2_v4l2_buffer {TYPE_2__ vb2_buf; } ;
struct vb2_queue {int dummy; } ;
struct delta_streaminfo {int dts; int size; int pixelformat; int streamformat; } ;
struct delta_frameinfo {int dts; int size; int pixelformat; int streamformat; } ;
struct delta_dev {int dev; } ;
typedef struct delta_dec const delta_dec ;
struct TYPE_3__ {int m2m_ctx; } ;
struct delta_ctx {scalar_t__ state; TYPE_1__ fh; int name; int flags; struct delta_dec const* dec; struct delta_streaminfo frameinfo; struct delta_streaminfo streaminfo; struct delta_dev* dev; } ;
struct delta_au {int dts; int size; int pixelformat; int streamformat; } ;
typedef int str2 ;
typedef int str1 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct delta_dec const*,int ,struct delta_ctx*,struct delta_streaminfo*) ;
 int VAR_7 ;
 int FUNC_1 (struct delta_ctx*,struct delta_streaminfo*,int) ;
 int FUNC_2 (struct delta_streaminfo*,unsigned char*,int) ;
 int FUNC_3 (struct delta_ctx*,int ,int ,struct delta_dec const**) ;
 int FUNC_4 (struct delta_ctx*,int ) ;
 int FUNC_5 (struct delta_streaminfo*,unsigned char*,int) ;
 int FUNC_6 (int ,char*,int ,int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*,int ,...) ;
 int FUNC_9 (struct delta_ctx*,struct delta_streaminfo*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct delta_streaminfo* FUNC_10 (struct vb2_v4l2_buffer*) ;
 int FUNC_11 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_12 (int ) ;
 struct delta_ctx* FUNC_13 (struct vb2_queue*) ;
 int FUNC_14 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_15(struct vb2_queue *VAR_10,
     unsigned int VAR_11)
{
 struct delta_ctx *VAR_12 = FUNC_13(VAR_10);
 struct delta_dev *VAR_13 = VAR_12->dev;
 const struct delta_dec *VAR_14 = VAR_12->dec;
 struct delta_au *VAR_15;
 int VAR_16 = 0;
 struct vb2_v4l2_buffer *VAR_17 = ((void*)0);
 struct delta_streaminfo *VAR_18 = &VAR_12->streaminfo;
 struct delta_frameinfo *VAR_19 = &VAR_12->frameinfo;
 unsigned char VAR_20[100] = "";
 unsigned char VAR_21[100] = "";

 if ((VAR_12->state != VAR_3) &&
     (VAR_12->state != VAR_4))
  return 0;

 if (VAR_12->state == VAR_3) {

  VAR_16 = FUNC_3(VAR_12,
      VAR_12->streaminfo.streamformat,
      VAR_12->frameinfo.pixelformat, &VAR_14);
  if (VAR_16)
   goto err;
  VAR_12->dec = VAR_14;
  VAR_12->state = VAR_4;
 }






 VAR_17 = FUNC_12(VAR_12->fh.m2m_ctx);
 if (!VAR_17) {
  FUNC_8(VAR_13->dev, "%s failed to start streaming, no stream header buffer enqueued\n",
   VAR_12->name);
  VAR_16 = -VAR_5;
  goto err;
 }
 VAR_15 = FUNC_10(VAR_17);
 VAR_15->size = FUNC_14(&VAR_17->vb2_buf, 0);
 VAR_15->dts = VAR_17->vb2_buf.timestamp;

 FUNC_4(VAR_12, VAR_15->dts);


 FUNC_9(VAR_12, VAR_15);


 VAR_16 = FUNC_0(VAR_14, VAR_7, VAR_12, VAR_15);
 if (VAR_16) {
  FUNC_8(VAR_13->dev, "%s failed to start streaming, header decoding failed (%d)\n",
   VAR_12->name, VAR_16);
  goto err;
 }

 VAR_16 = FUNC_0(VAR_14, VAR_9, VAR_12, VAR_18);
 if (VAR_16) {
  FUNC_7(VAR_13->dev,
        "%s failed to start streaming, valid stream header not yet decoded\n",
        VAR_12->name);
  goto err;
 }
 VAR_12->flags |= VAR_1;

 VAR_16 = FUNC_0(VAR_14, VAR_8, VAR_12, VAR_19);
 if (VAR_16)
  goto err;
 VAR_12->flags |= VAR_0;

 VAR_12->state = VAR_2;

 FUNC_6(VAR_13->dev, "%s %s => %s\n", VAR_12->name,
  FUNC_5(VAR_18, VAR_20, sizeof(VAR_20)),
  FUNC_2(VAR_19, VAR_21, sizeof(VAR_21)));

 FUNC_1(VAR_12, VAR_15, VAR_16);
 return 0;

err:




 if (VAR_17)
  FUNC_11(VAR_17, VAR_6);

 while ((VAR_17 = FUNC_12(VAR_12->fh.m2m_ctx)))
  FUNC_11(VAR_17, VAR_6);
 return VAR_16;
}
