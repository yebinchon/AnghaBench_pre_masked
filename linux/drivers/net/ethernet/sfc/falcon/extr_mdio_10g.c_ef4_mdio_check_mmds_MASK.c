
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ef4_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct ef4_nic*,int) ;
 int FUNC_2 (struct ef4_nic*,int,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct ef4_nic*,int ,int ,char*,...) ;
 int FUNC_4 (struct ef4_nic*,int ,int ,char*,unsigned int) ;

int FUNC_5(struct ef4_nic *VAR_7, unsigned int VAR_8)
{
 int VAR_9 = 0, VAR_10, VAR_11, VAR_12;
 u32 VAR_13;




 VAR_10 = (VAR_8 & VAR_4) ? VAR_5 :
     FUNC_0(VAR_8);


 VAR_11 = FUNC_2(VAR_7, VAR_10, VAR_2);
 VAR_12 = FUNC_2(VAR_7, VAR_10, VAR_3);
 if (VAR_11 < 0 || VAR_12 < 0) {
  FUNC_3(VAR_7, VAR_6, VAR_7->net_dev,
     "failed to read devices present\n");
  return -VAR_0;
 }
 VAR_13 = VAR_11 | (VAR_12 << 16);
 if ((VAR_13 & VAR_8) != VAR_8) {
  FUNC_3(VAR_7, VAR_6, VAR_7->net_dev,
     "required MMDs not present: got %x, wanted %x\n",
     VAR_13, VAR_8);
  return -VAR_1;
 }
 FUNC_4(VAR_7, VAR_6, VAR_7->net_dev, "Devices present: %x\n", VAR_13);


 while (VAR_8) {
  if ((VAR_8 & 1) && FUNC_1(VAR_7, VAR_9))
   return -VAR_0;
  VAR_8 = VAR_8 >> 1;
  VAR_9++;
 }

 return 0;
}
