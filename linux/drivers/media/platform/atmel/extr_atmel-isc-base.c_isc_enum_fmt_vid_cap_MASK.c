
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int fourcc; int sd_support; int mbus_code; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_fmtdesc *VAR_5)
{
 u32 VAR_6 = VAR_5->index;
 u32 VAR_7, VAR_8;

 if (VAR_6 < FUNC_0(VAR_1)) {
  VAR_5->pixelformat = VAR_1[VAR_6].fourcc;
  return 0;
 }

 VAR_6 -= FUNC_0(VAR_1);

 VAR_7 = 0;
 VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  if (!FUNC_1(VAR_2[VAR_7].mbus_code) ||
      !VAR_2[VAR_7].sd_support)
   continue;
  if (VAR_8 == VAR_6) {
   VAR_5->pixelformat = VAR_2[VAR_7].fourcc;
   return 0;
  }
  VAR_8++;
 }

 return -VAR_0;
}
