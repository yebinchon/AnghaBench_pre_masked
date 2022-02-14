
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct TYPE_2__ {int suspend; int prefetch; int inter; } ;
struct io_subchannel_private {TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct io_subchannel_private* FUNC_0 (struct subchannel*) ;

int FUNC_1(struct subchannel *VAR_3, int VAR_4)
{
 struct io_subchannel_private *VAR_5 = FUNC_0(VAR_3);

 VAR_5->options.suspend = (VAR_4 & VAR_0) != 0;
 VAR_5->options.prefetch = (VAR_4 & VAR_1) != 0;
 VAR_5->options.inter = (VAR_4 & VAR_2) != 0;
 return 0;
}
