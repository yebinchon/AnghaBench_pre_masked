
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vpfe_fh {struct vpfe_device* vpfe_dev; } ;
struct TYPE_5__ {unsigned int sizeimage; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct TYPE_7__ {TYPE_2__ fmt; } ;
struct vpfe_device {scalar_t__ memory; int v4l2_dev; TYPE_3__ fmt; } ;
struct videobuf_queue {struct vpfe_fh* priv_data; } ;
struct TYPE_8__ {unsigned int device_bufsize; unsigned int min_numbuffers; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int *,char*,...) ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_3,
    unsigned int *VAR_4,
    unsigned int *VAR_5)
{
 struct vpfe_fh *VAR_6 = VAR_3->priv_data;
 struct vpfe_device *VAR_7 = VAR_6->vpfe_dev;

 FUNC_0(1, VAR_2, &VAR_7->v4l2_dev, "vpfe_buffer_setup\n");
 *VAR_5 = VAR_7->fmt.fmt.pix.sizeimage;
 if (VAR_7->memory == VAR_0 &&
  VAR_7->fmt.fmt.pix.sizeimage > VAR_1.device_bufsize)
  *VAR_5 = VAR_1.device_bufsize;

 if (*VAR_4 < VAR_1.min_numbuffers)
  *VAR_4 = VAR_1.min_numbuffers;
 FUNC_0(1, VAR_2, &VAR_7->v4l2_dev,
  "count=%d, size=%d\n", *VAR_4, *VAR_5);
 return 0;
}
