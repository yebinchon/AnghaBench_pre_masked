
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vdic_priv {size_t active_input_pad; TYPE_1__* ops; int vdi; int motion; scalar_t__ csi_direct; struct v4l2_mbus_framefmt* format_mbus; } ;
struct v4l2_mbus_framefmt {int field; int height; int width; } ;
struct TYPE_3__ {int (* setup ) (struct vdic_priv*) ;int (* start ) (struct vdic_priv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct vdic_priv*) ;
 int FUNC_5 (struct vdic_priv*) ;
 int FUNC_6 (struct vdic_priv*) ;
 int FUNC_7 (struct vdic_priv*) ;

__attribute__((used)) static int FUNC_8(struct vdic_priv *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_4->format_mbus[VAR_4->active_input_pad];

 VAR_4->ops = VAR_4->csi_direct ? &VAR_2 : &VAR_3;

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  return VAR_6;
 FUNC_3(VAR_4->vdi, VAR_0,
        VAR_5->width, VAR_5->height);
 FUNC_1(VAR_4->vdi, VAR_1, VAR_5->field);
 FUNC_2(VAR_4->vdi, VAR_4->motion);

 VAR_6 = VAR_4->ops->setup(VAR_4);
 if (VAR_6)
  goto out_put_ipu;

 FUNC_0(VAR_4->vdi);

 VAR_4->ops->start(VAR_4);

 return 0;

out_put_ipu:
 FUNC_7(VAR_4);
 return VAR_6;
}
