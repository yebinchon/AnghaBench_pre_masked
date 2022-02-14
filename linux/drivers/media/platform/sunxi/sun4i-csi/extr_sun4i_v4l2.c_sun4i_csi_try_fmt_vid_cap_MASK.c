
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct sun4i_csi {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct sun4i_csi*,int *) ;
 struct sun4i_csi* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
         struct v4l2_format *VAR_2)
{
 struct sun4i_csi *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, &VAR_2->fmt.pix_mp);

 return 0;
}
