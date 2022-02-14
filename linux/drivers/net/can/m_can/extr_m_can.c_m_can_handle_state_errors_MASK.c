
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct m_can_classdev {TYPE_1__ can; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct m_can_classdev* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6, u32 VAR_7)
{
 struct m_can_classdev *VAR_8 = FUNC_2(VAR_6);
 int VAR_9 = 0;

 if (VAR_7 & VAR_5 && VAR_8->can.state != VAR_2) {
  FUNC_1(VAR_6, "entered error warning state\n");
  VAR_9 += FUNC_0(VAR_6,
             VAR_2);
 }

 if (VAR_7 & VAR_4 && VAR_8->can.state != VAR_1) {
  FUNC_1(VAR_6, "entered error passive state\n");
  VAR_9 += FUNC_0(VAR_6,
             VAR_1);
 }

 if (VAR_7 & VAR_3 && VAR_8->can.state != VAR_0) {
  FUNC_1(VAR_6, "entered error bus off state\n");
  VAR_9 += FUNC_0(VAR_6,
             VAR_0);
 }

 return VAR_9;
}
