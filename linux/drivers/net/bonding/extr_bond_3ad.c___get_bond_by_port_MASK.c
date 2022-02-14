
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int * slave; } ;
struct bonding {int dummy; } ;


 struct bonding* FUNC_0 (int *) ;

__attribute__((used)) static inline struct bonding *FUNC_1(struct port *VAR_0)
{
 if (VAR_0->slave == ((void*)0))
  return ((void*)0);

 return FUNC_0(VAR_0->slave);
}
