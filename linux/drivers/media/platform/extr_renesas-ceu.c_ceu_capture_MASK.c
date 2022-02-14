
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int dummy; } ;
struct ceu_device {TYPE_1__* active; struct v4l2_pix_format_mplane v4l2_pix; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int vb2_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct v4l2_pix_format_mplane*) ;
 int FUNC_1 (struct ceu_device*,int ,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct ceu_device *VAR_4)
{
 struct v4l2_pix_format_mplane *VAR_5 = &VAR_4->v4l2_pix;
 dma_addr_t VAR_6;

 VAR_6 =
  FUNC_2(&VAR_4->active->vb2_buf, 0);
 FUNC_1(VAR_4, VAR_3, VAR_6);


 if (FUNC_0(VAR_5)) {
  VAR_6 =
   FUNC_2(&VAR_4->active->vb2_buf,
            1);
  FUNC_1(VAR_4, VAR_2, VAR_6);
 }





 FUNC_1(VAR_4, VAR_0, VAR_1);

 return 0;
}
