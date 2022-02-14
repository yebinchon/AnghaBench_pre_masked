
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct ef4_nic*,int ,int ) ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ef4_nic *VAR_9)
{
 unsigned long VAR_10 = VAR_8 + VAR_6;
 int VAR_11, VAR_12 = 0;


 for (;;) {
  int VAR_13;
  VAR_11 = FUNC_0(VAR_9, VAR_1, VAR_2);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_13 = ((VAR_11 >> VAR_3) &
       ((1 << VAR_4) - 1));
  if (VAR_12 == 0)
   VAR_12 = VAR_13;
  else if (VAR_13 != VAR_12)
   break;
  if (FUNC_3(VAR_8, VAR_10)) {


   FUNC_2(VAR_9, VAR_7, VAR_9->net_dev,
      "If an SFP+ direct attach cable is"
      " connected, please check that it complies"
      " with the SFP+ specification\n");
   return -VAR_0;
  }
  FUNC_1(VAR_5);
 }

 return 0;
}
