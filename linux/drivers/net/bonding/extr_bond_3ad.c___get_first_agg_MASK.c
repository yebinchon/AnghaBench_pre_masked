
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {int dummy; } ;
struct port {int dummy; } ;
struct bonding {int dummy; } ;
struct aggregator {int dummy; } ;
struct TYPE_2__ {struct aggregator aggregator; } ;


 TYPE_1__* FUNC_0 (struct slave*) ;
 struct bonding* FUNC_1 (struct port*) ;
 struct slave* FUNC_2 (struct bonding*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static inline struct aggregator *FUNC_5(struct port *VAR_0)
{
 struct bonding *VAR_1 = FUNC_1(VAR_0);
 struct slave *VAR_2;
 struct aggregator *VAR_3;


 if (VAR_1 == ((void*)0))
  return ((void*)0);

 FUNC_3();
 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = VAR_2 ? &(FUNC_0(VAR_2)->aggregator) : ((void*)0);
 FUNC_4();

 return VAR_3;
}
