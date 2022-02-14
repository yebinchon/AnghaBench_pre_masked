
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ audmode; scalar_t__ index; } ;
struct radio_isa_ops {int (* s_stereo ) (struct radio_isa_card*,int) ;} ;
struct radio_isa_card {int stereo; TYPE_1__* drv; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct radio_isa_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct radio_isa_card*,int) ;
 struct radio_isa_card* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    const struct v4l2_tuner *VAR_4)
{
 struct radio_isa_card *VAR_5 = FUNC_1(VAR_2);
 const struct radio_isa_ops *VAR_6 = VAR_5->drv->ops;

 if (VAR_4->index)
  return -VAR_0;
 if (VAR_6->s_stereo) {
  VAR_5->stereo = (VAR_4->audmode == VAR_1);
  return VAR_6->s_stereo(VAR_5, VAR_5->stereo);
 }
 return 0;
}
