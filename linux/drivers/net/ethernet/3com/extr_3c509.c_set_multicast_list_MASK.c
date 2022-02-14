
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int flags; int name; } ;
struct el3_private {int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*) ;
 struct el3_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_9)
{
 unsigned long VAR_10;
 struct el3_private *VAR_11 = FUNC_1(VAR_9);
 int VAR_12 = VAR_9->base_addr;
 int VAR_13 = FUNC_0(VAR_9);

 if (VAR_8 > 1) {
  static int VAR_14;
  if (VAR_14 != VAR_13) {
   VAR_14 = VAR_13;
   FUNC_3("%s: Setting Rx mode to %d addresses.\n",
     VAR_9->name, VAR_13);
  }
 }
 FUNC_4(&VAR_11->lock, VAR_10);
 if (VAR_9->flags&VAR_2) {
  FUNC_2(VAR_7 | VAR_6 | VAR_4 | VAR_3 | VAR_5,
    VAR_12 + VAR_0);
 }
 else if (VAR_13 || (VAR_9->flags&VAR_1)) {
  FUNC_2(VAR_7 | VAR_6 | VAR_4 | VAR_3, VAR_12 + VAR_0);
 }
 else
  FUNC_2(VAR_7 | VAR_6 | VAR_3, VAR_12 + VAR_0);
 FUNC_5(&VAR_11->lock, VAR_10);
}
