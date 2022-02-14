
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_fmtdesc {unsigned int index; int pixelformat; } ;
struct TYPE_3__ {scalar_t__ type; int fourcc; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct v4l2_fmtdesc *VAR_2, u32 VAR_3)
{
 unsigned int VAR_4, VAR_5;

 for (VAR_4 = VAR_5 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4) {
  if (VAR_1[VAR_4].type == VAR_3) {
   if (VAR_5 == VAR_2->index)
    break;
   ++VAR_5;
  }
 }

 if (VAR_4 < FUNC_0(VAR_1)) {
  VAR_2->pixelformat = VAR_1[VAR_4].fourcc;
  return 0;
 }

 return -VAR_0;
}
