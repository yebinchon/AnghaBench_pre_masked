
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct m_can_classdev {TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 struct m_can_classdev* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, u32 VAR_4,
       u32 VAR_5)
{
 struct m_can_classdev *VAR_6 = FUNC_4(VAR_3);
 int VAR_7 = 0;

 if (VAR_4 & VAR_1)
  VAR_7 += FUNC_2(VAR_3);


 if ((VAR_6->can.ctrlmode & VAR_0) &&
     FUNC_0(VAR_5))
  VAR_7 += FUNC_1(VAR_3, VAR_5 & VAR_2);


 FUNC_3(VAR_3, VAR_4);

 return VAR_7;
}
