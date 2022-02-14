
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_ccw_device {int curr_io; int cdev; scalar_t__ err; } ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct virtio_ccw_device *VAR_0, __u32 VAR_1)
{
 unsigned long VAR_2;
 __u32 VAR_3;

 FUNC_1(FUNC_0(VAR_0->cdev), VAR_2);
 if (VAR_0->err)
  VAR_3 = 0;
 else
  VAR_3 = VAR_0->curr_io & VAR_1;
 FUNC_2(FUNC_0(VAR_0->cdev), VAR_2);
 return VAR_3;
}
