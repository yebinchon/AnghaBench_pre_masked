
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u8 FUNC_0(struct net_device *VAR_6)
{
 u8 VAR_7 = 0;

 if (VAR_6->flags & VAR_5) {
  VAR_7 = VAR_2 | VAR_1 | VAR_0;
 } else {
  VAR_7 |= VAR_3;
  if (VAR_6->flags & VAR_4)
   VAR_7 |= VAR_1;
 }

 return VAR_7;
}
