
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix_mp; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct imgu_fmt {scalar_t__ fourcc; scalar_t__ type; } ;


 unsigned int FUNC_0 (struct imgu_fmt const*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 struct imgu_fmt const* VAR_3 ;

__attribute__((used)) static const struct imgu_fmt *FUNC_1(struct v4l2_format *VAR_4, u32 VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  if (VAR_3[VAR_6].fourcc == VAR_4->fmt.pix_mp.pixelformat &&
      VAR_3[VAR_6].type == VAR_5)
   return &VAR_3[VAR_6];
 }

 return VAR_5 == VAR_2 ? &VAR_3[VAR_0] :
         &VAR_3[VAR_1];
}
