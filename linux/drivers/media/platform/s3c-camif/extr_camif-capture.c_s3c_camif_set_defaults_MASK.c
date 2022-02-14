
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int enable; } ;
struct TYPE_6__ {void* height; void* width; } ;
struct camif_frame {int f_width; int f_height; void* height; void* width; int code; TYPE_2__ rect; } ;
struct camif_vp {int id; int payload; TYPE_4__* out_fmt; TYPE_3__ scaler; int fmt_flags; int offset; struct camif_dev* camif; struct camif_frame out_frame; } ;
struct camif_dev {struct camif_frame camif_crop; struct camif_frame mbus_fmt; TYPE_1__* variant; struct camif_vp* vp; } ;
struct TYPE_8__ {int depth; } ;
struct TYPE_5__ {unsigned int ip_revision; int vp_offset; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (struct camif_frame*,int ,int) ;
 TYPE_4__* FUNC_2 (struct camif_vp*,int *,int ) ;

int FUNC_3(struct camif_dev *VAR_8)
{
 unsigned int VAR_9 = VAR_8->variant->ip_revision;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  struct camif_vp *VAR_11 = &VAR_8->vp[VAR_10];
  struct camif_frame *VAR_12 = &VAR_11->out_frame;

  VAR_11->camif = VAR_8;
  VAR_11->id = VAR_10;
  VAR_11->offset = VAR_8->variant->vp_offset;

  if (VAR_9 == VAR_6)
   VAR_11->fmt_flags = VAR_10 ? VAR_4 :
     VAR_3;
  else
   VAR_11->fmt_flags = VAR_5;

  VAR_11->out_fmt = FUNC_2(VAR_11, ((void*)0), 0);
  FUNC_0(VAR_11->out_fmt == ((void*)0));

  FUNC_1(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->f_width = VAR_1;
  VAR_12->f_height = VAR_0;
  VAR_12->rect.width = VAR_1;
  VAR_12->rect.height = VAR_0;


  VAR_11->scaler.enable = 1;

  VAR_11->payload = (VAR_12->f_width * VAR_12->f_height *
          VAR_11->out_fmt->depth) / 8;
 }

 FUNC_1(&VAR_8->mbus_fmt, 0, sizeof(VAR_8->mbus_fmt));
 VAR_8->mbus_fmt.width = VAR_1;
 VAR_8->mbus_fmt.height = VAR_0;
 VAR_8->mbus_fmt.code = VAR_7[0];

 FUNC_1(&VAR_8->camif_crop, 0, sizeof(VAR_8->camif_crop));
 VAR_8->camif_crop.width = VAR_1;
 VAR_8->camif_crop.height = VAR_0;

 return 0;
}
