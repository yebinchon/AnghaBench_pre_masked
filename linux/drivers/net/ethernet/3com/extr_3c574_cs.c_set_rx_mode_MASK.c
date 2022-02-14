
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_8)
{
 unsigned int VAR_9 = VAR_8->base_addr;

 if (VAR_8->flags & VAR_2)
  FUNC_1(VAR_7 | VAR_6 | VAR_4 | VAR_3 | VAR_5,
    VAR_9 + VAR_0);
 else if (!FUNC_0(VAR_8) || (VAR_8->flags & VAR_1))
  FUNC_1(VAR_7|VAR_6|VAR_4|VAR_3, VAR_9 + VAR_0);
 else
  FUNC_1(VAR_7 | VAR_6 | VAR_3, VAR_9 + VAR_0);
}
