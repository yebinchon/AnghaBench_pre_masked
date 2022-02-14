
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int dummy; } ;
struct io_subchannel_private {struct ccw_device* cdev; } ;
struct ccw_device {int dummy; } ;


 struct io_subchannel_private* FUNC_0 (struct subchannel*) ;

__attribute__((used)) static inline void FUNC_1(struct subchannel *VAR_0,
    struct ccw_device *VAR_1)
{
 struct io_subchannel_private *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  VAR_2->cdev = VAR_1;
}
