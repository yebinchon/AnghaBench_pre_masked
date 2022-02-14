
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ag71xx {int napi; } ;
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
 int FUNC_0 (struct ag71xx*,int) ;
 int FUNC_1 (struct ag71xx*,int ) ;
 int FUNC_2 (struct ag71xx*,int ,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 struct ag71xx* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ag71xx*,int ,struct net_device*,char*) ;
 int FUNC_7 (struct ag71xx*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_12, void *VAR_13)
{
 struct net_device *VAR_14 = VAR_13;
 struct ag71xx *VAR_15;
 u32 VAR_16;

 VAR_15 = FUNC_5(VAR_14);
 VAR_16 = FUNC_1(VAR_15, VAR_4);

 if (FUNC_8(!VAR_16))
  return VAR_8;

 if (FUNC_8(VAR_16 & VAR_0)) {
  if (VAR_16 & VAR_3) {
   FUNC_2(VAR_15, VAR_6, VAR_10);
   FUNC_7(VAR_15, VAR_11, VAR_14, "TX BUS error\n");
  }
  if (VAR_16 & VAR_2) {
   FUNC_2(VAR_15, VAR_5, VAR_9);
   FUNC_7(VAR_15, VAR_11, VAR_14, "RX BUS error\n");
  }
 }

 if (FUNC_3(VAR_16 & VAR_1)) {
  FUNC_0(VAR_15, VAR_1);
  FUNC_6(VAR_15, VAR_11, VAR_14, "enable polling mode\n");
  FUNC_4(&VAR_15->napi);
 }

 return VAR_7;
}
