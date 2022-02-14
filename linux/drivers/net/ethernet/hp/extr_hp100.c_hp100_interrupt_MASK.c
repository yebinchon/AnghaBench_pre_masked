
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct net_device {int base_addr; int name; } ;
struct hp100_private {int mode; int lock; } ;
typedef int irqreturn_t ;


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
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 struct hp100_private* FUNC_11 (struct net_device*) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_15, void *VAR_16)
{
 struct net_device *VAR_17 = (struct net_device *) VAR_16;
 struct hp100_private *VAR_18 = FUNC_11(VAR_17);

 int VAR_19;
 u_int VAR_20;

 if (VAR_17 == ((void*)0))
  return VAR_8;
 VAR_19 = VAR_17->base_addr;

 FUNC_13(&VAR_18->lock);

 FUNC_2();






 VAR_20 = FUNC_4(VAR_9);






 if (VAR_20 == 0) {
  FUNC_14(&VAR_18->lock);
  FUNC_3();
  return VAR_8;
 }
 if (VAR_20 & VAR_4) {
  if (VAR_18->mode == 1)
   FUNC_8(VAR_17);
  else {
   FUNC_12("hp100: %s: rx_pdl_fill_compl interrupt although not busmaster?\n", VAR_17->name);
  }
 }
 if (VAR_20 & VAR_2) {
  if (VAR_18->mode != 1)
   FUNC_7(VAR_17);
  else if (!(VAR_20 & VAR_4)) {

   FUNC_8(VAR_17);
  }
 }







 FUNC_6(VAR_20, VAR_9);







 if (VAR_20 & (VAR_6 | VAR_1)) {



  FUNC_10(VAR_17);
  if (VAR_18->mode == 1) {
   FUNC_9(VAR_17);
   FUNC_0(VAR_17);
  }
 }




 if ((VAR_18->mode == 1) && (VAR_20 & (VAR_3)))
  FUNC_9(VAR_17);





 if ((VAR_18->mode == 1) && (VAR_20 & (VAR_5)))
  FUNC_0(VAR_17);





 if (VAR_20 & VAR_0) {





  if (VAR_18->mode == 1) {
   FUNC_0(VAR_17);
   FUNC_9(VAR_17);
  }
  FUNC_5(VAR_17);
 }

 FUNC_14(&VAR_18->lock);
 FUNC_3();
 return VAR_7;
}
