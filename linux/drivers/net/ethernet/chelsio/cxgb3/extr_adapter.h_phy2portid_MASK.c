
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {struct adapter* adapter; } ;
struct port_info {struct cphy phy; } ;
struct adapter {int dummy; } ;


 struct port_info* FUNC_0 (struct adapter*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct cphy *VAR_0)
{
 struct adapter *VAR_1 = VAR_0->adapter;
 struct port_info *VAR_2 = FUNC_0(VAR_1, 0);

 return &VAR_2->phy == VAR_0 ? 0 : 1;
}
