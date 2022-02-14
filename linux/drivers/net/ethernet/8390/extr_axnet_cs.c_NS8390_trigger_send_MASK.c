
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {long base_addr; } ;
struct ei_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (long) ;
 struct ei_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_7, unsigned int VAR_8,
        int VAR_9)
{
 long VAR_10 = VAR_7->base_addr;
  struct ei_device *VAR_11 __attribute((unused)) = FUNC_1(VAR_7);

 if (FUNC_0(VAR_10) & VAR_3)
 {
  FUNC_2(VAR_7, "trigger_send() called with the transmitter busy\n");
  return;
 }
 FUNC_3(VAR_8 & 0xff, VAR_10 + VAR_5);
 FUNC_3(VAR_8 >> 8, VAR_10 + VAR_4);
 FUNC_3(VAR_9, VAR_10 + VAR_6);
 FUNC_3(VAR_1+VAR_3+VAR_2, VAR_10+VAR_0);
}
