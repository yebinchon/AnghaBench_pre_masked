
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_3, int VAR_4)
{
 if (VAR_4 & VAR_0)
  FUNC_0(VAR_3, "FCS error\n");
 if (VAR_4 & VAR_1)
  FUNC_0(VAR_3, "rx fifo overrun error\n");
 if (VAR_4 & VAR_2)
  FUNC_0(VAR_3, "tx fifo underrun error\n");
}
