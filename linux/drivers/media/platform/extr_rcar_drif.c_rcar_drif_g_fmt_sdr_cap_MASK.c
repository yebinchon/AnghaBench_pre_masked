
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buffersize; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ sdr; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct rcar_drif_sdr {TYPE_3__* fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int buffersize; int pixelformat; } ;


 struct rcar_drif_sdr* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
       struct v4l2_format *VAR_2)
{
 struct rcar_drif_sdr *VAR_3 = FUNC_0(VAR_0);

 VAR_2->fmt.sdr.pixelformat = VAR_3->fmt->pixelformat;
 VAR_2->fmt.sdr.buffersize = VAR_3->fmt->buffersize;

 return 0;
}
