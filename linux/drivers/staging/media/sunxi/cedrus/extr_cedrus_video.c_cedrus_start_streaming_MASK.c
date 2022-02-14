
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct cedrus_dev {TYPE_1__** dec_ops; } ;
struct TYPE_4__ {int pixelformat; } ;
struct cedrus_ctx {size_t current_codec; TYPE_2__ src_fmt; struct cedrus_dev* dev; } ;
struct TYPE_3__ {int (* start ) (struct cedrus_ctx*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct vb2_queue*,int ) ;
 int FUNC_2 (struct cedrus_ctx*) ;
 struct cedrus_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_4, unsigned int VAR_5)
{
 struct cedrus_ctx *VAR_6 = FUNC_3(VAR_4);
 struct cedrus_dev *VAR_7 = VAR_6->dev;
 int VAR_8 = 0;

 switch (VAR_6->src_fmt.pixelformat) {
 case 128:
  VAR_6->current_codec = VAR_1;
  break;

 case 129:
  VAR_6->current_codec = VAR_0;
  break;

 default:
  return -VAR_2;
 }

 if (FUNC_0(VAR_4->type) &&
     VAR_7->dec_ops[VAR_6->current_codec]->start)
  VAR_8 = VAR_7->dec_ops[VAR_6->current_codec]->start(VAR_6);

 if (VAR_8)
  FUNC_1(VAR_4, VAR_3);

 return VAR_8;
}
