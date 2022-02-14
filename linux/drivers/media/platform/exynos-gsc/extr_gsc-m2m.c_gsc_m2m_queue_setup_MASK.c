
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct gsc_frame {unsigned int* payload; TYPE_1__* fmt; } ;
struct gsc_ctx {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int num_planes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gsc_frame*) ;
 int FUNC_1 (struct gsc_frame*) ;
 struct gsc_frame* FUNC_2 (struct gsc_ctx*,int ) ;
 struct gsc_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_1,
   unsigned int *VAR_2, unsigned int *VAR_3,
   unsigned int VAR_4[], struct device *VAR_5[])
{
 struct gsc_ctx *VAR_6 = FUNC_3(VAR_1);
 struct gsc_frame *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6, VAR_1->type);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (!VAR_7->fmt)
  return -VAR_0;

 *VAR_3 = VAR_7->fmt->num_planes;
 for (VAR_8 = 0; VAR_8 < VAR_7->fmt->num_planes; VAR_8++)
  VAR_4[VAR_8] = VAR_7->payload[VAR_8];
 return 0;
}
