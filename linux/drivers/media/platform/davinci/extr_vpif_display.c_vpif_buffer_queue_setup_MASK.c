
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {unsigned int num_buffers; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned int sizeimage; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct common_obj {TYPE_3__ fmt; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct channel_obj* FUNC_0 (struct vb2_queue*) ;
 int FUNC_1 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_2,
    unsigned int *VAR_3, unsigned int *VAR_4,
    unsigned int VAR_5[], struct device *VAR_6[])
{
 struct channel_obj *VAR_7 = FUNC_0(VAR_2);
 struct common_obj *VAR_8 = &VAR_7->common[VAR_1];
 unsigned VAR_9 = VAR_8->fmt.fmt.pix.sizeimage;

 if (*VAR_4) {
  if (VAR_5[0] < VAR_9)
   return -VAR_0;
  VAR_9 = VAR_5[0];
 }

 if (VAR_2->num_buffers + *VAR_3 < 3)
  *VAR_3 = 3 - VAR_2->num_buffers;

 *VAR_4 = 1;
 VAR_5[0] = VAR_9;


 FUNC_1(VAR_7);

 return 0;
}
