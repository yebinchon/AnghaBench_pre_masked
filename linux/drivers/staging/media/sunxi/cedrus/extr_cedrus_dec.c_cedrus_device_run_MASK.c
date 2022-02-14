
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct media_request {int dummy; } ;
struct TYPE_15__ {void* sps; void* slice_params; void* scaling_matrix; void* pps; void* decode_params; } ;
struct TYPE_14__ {void* quantization; void* slice_params; } ;
struct cedrus_run {int dst; TYPE_8__* src; TYPE_6__ h264; TYPE_5__ mpeg2; } ;
struct cedrus_dev {TYPE_7__** dec_ops; } ;
struct TYPE_13__ {int pixelformat; } ;
struct TYPE_10__ {int m2m_ctx; } ;
struct cedrus_ctx {size_t current_codec; int hdl; TYPE_4__ src_fmt; TYPE_1__ fh; struct cedrus_dev* dev; } ;
struct TYPE_11__ {struct media_request* req; } ;
struct TYPE_12__ {TYPE_2__ req_obj; } ;
struct TYPE_17__ {TYPE_3__ vb2_buf; } ;
struct TYPE_16__ {int (* trigger ) (struct cedrus_ctx*) ;int (* setup ) (struct cedrus_ctx*,struct cedrus_run*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 void* FUNC_0 (struct cedrus_ctx*,int ) ;
 int FUNC_1 (struct cedrus_ctx*,struct cedrus_run*) ;
 int FUNC_2 (struct cedrus_ctx*) ;
 int FUNC_3 (struct media_request*,int *) ;
 int FUNC_4 (struct media_request*,int *) ;
 int FUNC_5 (TYPE_8__*,int ,int) ;
 int FUNC_6 (int ) ;
 TYPE_8__* FUNC_7 (int ) ;

void FUNC_8(void *VAR_7)
{
 struct cedrus_ctx *VAR_8 = VAR_7;
 struct cedrus_dev *VAR_9 = VAR_8->dev;
 struct cedrus_run VAR_10 = {};
 struct media_request *VAR_11;

 VAR_10.src = FUNC_7(VAR_8->fh.m2m_ctx);
 VAR_10.dst = FUNC_6(VAR_8->fh.m2m_ctx);


 VAR_11 = VAR_10.src->vb2_buf.req_obj.req;

 if (VAR_11)
  FUNC_4(VAR_11, &VAR_8->hdl);

 switch (VAR_8->src_fmt.pixelformat) {
 case 128:
  VAR_10.mpeg2.slice_params = FUNC_0(VAR_8,
   VAR_6);
  VAR_10.mpeg2.quantization = FUNC_0(VAR_8,
   VAR_5);
  break;

 case 129:
  VAR_10.h264.decode_params = FUNC_0(VAR_8,
   VAR_0);
  VAR_10.h264.pps = FUNC_0(VAR_8,
   VAR_1);
  VAR_10.h264.scaling_matrix = FUNC_0(VAR_8,
   VAR_2);
  VAR_10.h264.slice_params = FUNC_0(VAR_8,
   VAR_3);
  VAR_10.h264.sps = FUNC_0(VAR_8,
   VAR_4);
  break;

 default:
  break;
 }

 FUNC_5(VAR_10.src, VAR_10.dst, 1);

 VAR_9->dec_ops[VAR_8->current_codec]->setup(VAR_8, &VAR_10);



 if (VAR_11)
  FUNC_3(VAR_11, &VAR_8->hdl);

 VAR_9->dec_ops[VAR_8->current_codec]->trigger(VAR_8);
}
