
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cio2_queue {int format; } ;


 int FUNC_0 (struct file*,void*,struct v4l2_format*) ;
 struct cio2_queue* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 struct cio2_queue *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_3->format = VAR_2->fmt.pix_mp;

 return 0;
}
