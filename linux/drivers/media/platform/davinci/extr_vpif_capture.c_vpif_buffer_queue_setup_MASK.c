
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
 int VAR_2 ;
 struct channel_obj* FUNC_0 (struct vb2_queue*) ;
 int FUNC_1 (struct channel_obj*) ;
 int FUNC_2 (int,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_3,
    unsigned int *VAR_4, unsigned int *VAR_5,
    unsigned int VAR_6[], struct device *VAR_7[])
{
 struct channel_obj *VAR_8 = FUNC_0(VAR_3);
 struct common_obj *VAR_9 = &VAR_8->common[VAR_1];
 unsigned VAR_10 = VAR_9->fmt.fmt.pix.sizeimage;

 FUNC_2(2, VAR_2, "vpif_buffer_setup\n");

 if (*VAR_5) {
  if (VAR_6[0] < VAR_10)
   return -VAR_0;
  VAR_10 = VAR_6[0];
 }

 if (VAR_3->num_buffers + *VAR_4 < 3)
  *VAR_4 = 3 - VAR_3->num_buffers;

 *VAR_5 = 1;
 VAR_6[0] = VAR_10;


 FUNC_1(VAR_8);

 return 0;
}
