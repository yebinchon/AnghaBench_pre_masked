
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct radio_si4713_device {struct v4l2_device v4l2_dev; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;

__attribute__((used)) static inline struct v4l2_device *FUNC_1(struct file *VAR_0)
{
 return &((struct radio_si4713_device *)FUNC_0(VAR_0))->v4l2_dev;
}
