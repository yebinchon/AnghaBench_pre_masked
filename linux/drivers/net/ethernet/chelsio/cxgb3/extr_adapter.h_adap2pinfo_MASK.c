
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int dummy; } ;
struct adapter {int * port; } ;


 struct port_info* FUNC_0 (int ) ;

__attribute__((used)) static inline struct port_info *FUNC_1(struct adapter *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->port[VAR_1]);
}
