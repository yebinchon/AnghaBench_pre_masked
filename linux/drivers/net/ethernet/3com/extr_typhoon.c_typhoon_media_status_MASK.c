
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resp_desc {int parm1; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void
FUNC_2(struct net_device *VAR_1, struct resp_desc *VAR_2)
{
 if(VAR_2->parm1 & VAR_0)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_1);
}
