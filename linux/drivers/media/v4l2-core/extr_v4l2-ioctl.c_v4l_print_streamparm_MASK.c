
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int denominator; int numerator; } ;
struct v4l2_outputparm {int writebuffers; int extendedmode; TYPE_3__ timeperframe; int outputmode; int capability; } ;
struct TYPE_4__ {int denominator; int numerator; } ;
struct v4l2_captureparm {int readbuffers; int extendedmode; TYPE_1__ timeperframe; int capturemode; int capability; } ;
struct TYPE_5__ {struct v4l2_outputparm output; struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(const void *VAR_5, bool VAR_6)
{
 const struct v4l2_streamparm *VAR_7 = VAR_5;

 FUNC_0("type=%s", FUNC_1(VAR_7->type, VAR_4));

 if (VAR_7->type == VAR_0 ||
     VAR_7->type == VAR_1) {
  const struct v4l2_captureparm *VAR_8 = &VAR_7->parm.capture;

  FUNC_0(", capability=0x%x, capturemode=0x%x, timeperframe=%d/%d, extendedmode=%d, readbuffers=%d\n",
   VAR_8->capability, VAR_8->capturemode,
   VAR_8->timeperframe.numerator, VAR_8->timeperframe.denominator,
   VAR_8->extendedmode, VAR_8->readbuffers);
 } else if (VAR_7->type == VAR_2 ||
     VAR_7->type == VAR_3) {
  const struct v4l2_outputparm *VAR_9 = &VAR_7->parm.output;

  FUNC_0(", capability=0x%x, outputmode=0x%x, timeperframe=%d/%d, extendedmode=%d, writebuffers=%d\n",
   VAR_9->capability, VAR_9->outputmode,
   VAR_9->timeperframe.numerator, VAR_9->timeperframe.denominator,
   VAR_9->extendedmode, VAR_9->writebuffers);
 } else {
  FUNC_0("\n");
 }
}
