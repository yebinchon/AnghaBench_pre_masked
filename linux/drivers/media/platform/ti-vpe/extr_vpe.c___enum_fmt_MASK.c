
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vpe_fmt {int types; int fourcc; } ;
struct v4l2_fmtdesc {int index; int pixelformat; } ;


 int FUNC_0 (struct vpe_fmt*) ;
 int VAR_0 ;
 struct vpe_fmt* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct v4l2_fmtdesc *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;
 struct vpe_fmt *VAR_6 = ((void*)0);

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4) {
  if (VAR_1[VAR_4].types & VAR_3) {
   if (VAR_5 == VAR_2->index) {
    VAR_6 = &VAR_1[VAR_4];
    break;
   }
   VAR_5++;
  }
 }

 if (!VAR_6)
  return -VAR_0;

 VAR_2->pixelformat = VAR_6->fourcc;
 return 0;
}
