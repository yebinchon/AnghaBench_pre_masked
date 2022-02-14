
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int dummy; } ;
struct io_subchannel_private {struct ccw_device* cdev; } ;
struct ccw_device {int dummy; } ;


 struct io_subchannel_private* FUNC_0 (struct subchannel*) ;

__attribute__((used)) static inline struct ccw_device *FUNC_1(struct subchannel *VAR_0)
{
 struct io_subchannel_private *VAR_1 = FUNC_0(VAR_0);
 return VAR_1 ? VAR_1->cdev : ((void*)0);
}
