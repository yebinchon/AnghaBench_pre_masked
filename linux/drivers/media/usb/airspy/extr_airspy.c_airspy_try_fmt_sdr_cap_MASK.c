
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pixelformat; int buffersize; int reserved; } ;
struct TYPE_4__ {TYPE_2__ sdr; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_6__ {scalar_t__ pixelformat; int buffersize; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
  struct v4l2_format *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4->fmt.sdr.reserved, 0, sizeof(VAR_4->fmt.sdr.reserved));
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1[VAR_5].pixelformat == VAR_4->fmt.sdr.pixelformat) {
   VAR_4->fmt.sdr.buffersize = VAR_1[VAR_5].buffersize;
   return 0;
  }
 }

 VAR_4->fmt.sdr.pixelformat = VAR_1[0].pixelformat;
 VAR_4->fmt.sdr.buffersize = VAR_1[0].buffersize;

 return 0;
}
