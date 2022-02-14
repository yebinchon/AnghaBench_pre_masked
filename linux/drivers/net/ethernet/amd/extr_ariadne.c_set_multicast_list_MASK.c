
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; scalar_t__ base_addr; } ;
struct Am79C960 {int RDP; void* RAP; } ;
typedef int multicast_table ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (short*,int,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (short) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_9)
{
 volatile struct Am79C960 *VAR_10 = (struct Am79C960 *)VAR_9->base_addr;

 if (!FUNC_3(VAR_9))
  return;

 FUNC_4(VAR_9);


 VAR_10->RAP = VAR_0;
 VAR_10->RDP = VAR_7;
 FUNC_0(VAR_9);

 if (VAR_9->flags & VAR_4) {
  VAR_10->RAP = VAR_1;
  VAR_10->RDP = VAR_6;
 } else {
  short VAR_11[4];
  int VAR_12 = FUNC_2(VAR_9);
  int VAR_13;



  FUNC_1(VAR_11, (VAR_12 == 0) ? 0 : -1,
         sizeof(VAR_11));
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   VAR_10->RAP = VAR_2 + (VAR_13 << 8);

   VAR_10->RDP = FUNC_6(VAR_11[VAR_13]);
  }
  VAR_10->RAP = VAR_1;
  VAR_10->RDP = 0x0000;
 }

 VAR_10->RAP = VAR_0;
 VAR_10->RDP = VAR_5 | VAR_8 | VAR_3;

 FUNC_5(VAR_9);
}
