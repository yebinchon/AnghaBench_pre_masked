
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct m_can_classdev {int irqstatus; int version; } ;
struct can_berr_counter {int rxerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,struct can_berr_counter*) ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;
 scalar_t__ FUNC_2 (struct net_device*,int,int) ;
 scalar_t__ FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct m_can_classdev*,int ) ;
 int FUNC_5 (struct m_can_classdev*,int ,int) ;
 struct m_can_classdev* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_8, int VAR_9)
{
 struct m_can_classdev *VAR_10 = FUNC_6(VAR_8);
 int VAR_11 = 0;
 u32 VAR_12, VAR_13;

 VAR_12 = VAR_10->irqstatus | FUNC_4(VAR_10, VAR_6);
 if (!VAR_12)
  goto end;
 if (VAR_10->version <= 31 && VAR_12 & VAR_3 &&
     FUNC_4(VAR_10, VAR_5) & VAR_0) {
  struct can_berr_counter VAR_14;

  FUNC_0(VAR_8, &VAR_14);
  if (VAR_14.rxerr == 127) {
   FUNC_5(VAR_10, VAR_6, VAR_3);
   VAR_12 &= ~VAR_3;
  }
 }

 VAR_13 = FUNC_4(VAR_10, VAR_7);

 if (VAR_12 & VAR_2)
  VAR_11 += FUNC_3(VAR_8, VAR_13);

 if (VAR_12 & VAR_1)
  VAR_11 += FUNC_2(VAR_8, VAR_12, VAR_13);

 if (VAR_12 & VAR_4)
  VAR_11 += FUNC_1(VAR_8, (VAR_9 - VAR_11));
end:
 return VAR_11;
}
