
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int flags; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_9)
{
 int VAR_10 = VAR_9->base_addr;
 unsigned short VAR_11;

 if (VAR_9->flags & VAR_2) {
  if (VAR_8 > 3)
   FUNC_2("%s: Setting promiscuous mode.\n",
          VAR_9->name);
  VAR_11 = VAR_7 | VAR_6 | VAR_4 | VAR_3 | VAR_5;
 } else if (!FUNC_0(VAR_9) || VAR_9->flags & VAR_1) {
  VAR_11 = VAR_7 | VAR_6 | VAR_4 | VAR_3;
 } else
  VAR_11 = VAR_7 | VAR_6 | VAR_3;

 FUNC_1(VAR_11, VAR_10 + VAR_0);
}
