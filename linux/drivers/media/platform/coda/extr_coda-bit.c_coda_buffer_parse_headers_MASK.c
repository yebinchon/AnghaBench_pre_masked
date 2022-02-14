
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct coda_ctx {TYPE_1__* codec; } ;
struct TYPE_2__ {int src_fourcc; } ;




 int FUNC_0 (struct coda_ctx*,int *,int ) ;
 int FUNC_1 (struct coda_ctx*,int *,int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static u32 FUNC_3(struct coda_ctx *VAR_0,
         struct vb2_v4l2_buffer *VAR_1,
         u32 VAR_2)
{
 u8 *VAR_3 = FUNC_2(&VAR_1->vb2_buf, 0);
 u32 VAR_4 = 0;

 switch (VAR_0->codec->src_fourcc) {
 case 129:
  VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_2);
  break;
 default:
  break;
 }

 return VAR_4;
}
