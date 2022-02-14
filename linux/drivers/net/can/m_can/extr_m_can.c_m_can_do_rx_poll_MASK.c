
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct m_can_classdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct m_can_classdev*,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct m_can_classdev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, int VAR_5)
{
 struct m_can_classdev *VAR_6 = FUNC_4(VAR_4);
 u32 VAR_7 = 0;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_1);
 if (!(VAR_8 & VAR_2)) {
  FUNC_3(VAR_4, "no messages in fifo0\n");
  return 0;
 }

 while ((VAR_8 & VAR_2) && (VAR_5 > 0)) {
  if (VAR_8 & VAR_3)
   FUNC_5(VAR_4, "Rx FIFO 0 Message Lost\n");

  FUNC_2(VAR_4, VAR_8);

  VAR_5--;
  VAR_7++;
  VAR_8 = FUNC_1(VAR_6, VAR_1);
 }

 if (VAR_7)
  FUNC_0(VAR_4, VAR_0);

 return VAR_7;
}
