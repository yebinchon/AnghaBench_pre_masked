
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int vb2_queue; } ;
struct TYPE_2__ {unsigned long sizeimage; } ;
struct rvin_dev {TYPE_1__ format; } ;


 int VAR_0 ;
 struct rvin_dev* FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct vb2_buffer*,int ) ;
 int FUNC_2 (struct vb2_buffer*,int ,unsigned long) ;
 int FUNC_3 (struct rvin_dev*,char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct rvin_dev *VAR_2 = FUNC_0(VAR_1->vb2_queue);
 unsigned long VAR_3 = VAR_2->format.sizeimage;

 if (FUNC_1(VAR_1, 0) < VAR_3) {
  FUNC_3(VAR_2, "buffer too small (%lu < %lu)\n",
   FUNC_1(VAR_1, 0), VAR_3);
  return -VAR_0;
 }

 FUNC_2(VAR_1, 0, VAR_3);

 return 0;
}
