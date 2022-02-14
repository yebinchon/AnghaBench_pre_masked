
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
typedef enum octnet_ifflags { ____Placeholder_octnet_ifflags } octnet_ifflags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static enum octnet_ifflags FUNC_1(struct net_device *VAR_10)
{
 enum octnet_ifflags VAR_11 = VAR_9;

 if (VAR_10->flags & VAR_3)
  VAR_11 |= VAR_8;

 if (VAR_10->flags & VAR_0)
  VAR_11 |= VAR_5;

 if (VAR_10->flags & VAR_2) {
  VAR_11 |= VAR_7;




  if (FUNC_0(VAR_10) > VAR_4)
   VAR_11 |= VAR_5;
 }

 if (VAR_10->flags & VAR_1)
  VAR_11 |= VAR_6;

 return VAR_11;
}
