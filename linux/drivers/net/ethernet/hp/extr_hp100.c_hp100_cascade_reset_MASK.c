
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct net_device {int base_addr; int name; } ;
struct hp100_private {scalar_t__ chip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 struct hp100_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_10, u_short VAR_11)
{
 int VAR_12 = VAR_10->base_addr;
 struct hp100_private *VAR_13 = FUNC_4(VAR_10);






 if (VAR_11) {
  FUNC_2(VAR_1 | VAR_3, VAR_6);
  if (VAR_13->chip == VAR_0) {

   FUNC_3(VAR_5);
   FUNC_0(~VAR_2, VAR_7);
   FUNC_1(VAR_2, VAR_7);



   FUNC_6(400);
   FUNC_0(~VAR_2, VAR_7);
   FUNC_3(VAR_8);
  }
 } else {
  FUNC_2(VAR_1 | VAR_4, VAR_6);
  FUNC_6(400);
  FUNC_3(VAR_8);
 }
}
