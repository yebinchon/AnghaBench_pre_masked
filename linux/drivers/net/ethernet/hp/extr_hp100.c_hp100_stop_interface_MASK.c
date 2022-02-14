
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct net_device {int base_addr; int name; } ;
struct hp100_private {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 struct hp100_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_15)
{
 struct hp100_private *VAR_16 = FUNC_6(VAR_15);
 int VAR_17 = VAR_15->base_addr;
 u_int VAR_18;






 if (VAR_16->mode == 1)
  FUNC_0(VAR_15);
 else {

  FUNC_4(VAR_1 | VAR_3 |
      VAR_7 | VAR_2 | VAR_6,
      VAR_12);
  VAR_18 = FUNC_3(VAR_12);

  FUNC_5(VAR_11);
  FUNC_1(~(VAR_4 | VAR_8), VAR_10);

  if (!(VAR_18 & VAR_0))
   return;

  for (VAR_18 = 0; VAR_18 < 6000; VAR_18++)
   if ((FUNC_2(VAR_10) & (VAR_9 | VAR_5)) == (VAR_9 | VAR_5)) {
    FUNC_5(VAR_13);
    return;
   }
  FUNC_7("hp100: %s: hp100_stop_interface - timeout\n", VAR_15->name);
  FUNC_5(VAR_13);
 }
}
