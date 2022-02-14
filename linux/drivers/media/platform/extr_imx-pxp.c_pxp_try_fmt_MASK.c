
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int field; int height; int width; int sizeimage; int bytesperline; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct pxp_fmt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pxp_fmt*,int ) ;
 int FUNC_1 (struct pxp_fmt*,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_format *VAR_7, struct pxp_fmt *VAR_8)
{
 FUNC_2(&VAR_7->fmt.pix.width, VAR_5, VAR_3, VAR_1,
         &VAR_7->fmt.pix.height, VAR_4, VAR_2, VAR_0, 0);

 VAR_7->fmt.pix.bytesperline = FUNC_0(VAR_8, VAR_7->fmt.pix.width);
 VAR_7->fmt.pix.sizeimage = FUNC_1(VAR_8, VAR_7->fmt.pix.width,
          VAR_7->fmt.pix.height);
 VAR_7->fmt.pix.field = VAR_6;

 return 0;
}
