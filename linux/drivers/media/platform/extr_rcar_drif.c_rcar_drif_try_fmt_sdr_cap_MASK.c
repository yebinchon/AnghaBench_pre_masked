
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pixelformat; int reserved; int buffersize; } ;
struct TYPE_6__ {TYPE_1__ sdr; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct TYPE_7__ {scalar_t__ pixelformat; int buffersize; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
         struct v4l2_format *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_0[VAR_4].pixelformat == VAR_3->fmt.sdr.pixelformat) {
   VAR_3->fmt.sdr.buffersize = VAR_0[VAR_4].buffersize;
   return 0;
  }
 }

 VAR_3->fmt.sdr.pixelformat = VAR_0[0].pixelformat;
 VAR_3->fmt.sdr.buffersize = VAR_0[0].buffersize;
 FUNC_1(VAR_3->fmt.sdr.reserved, 0, sizeof(VAR_3->fmt.sdr.reserved));

 return 0;
}
