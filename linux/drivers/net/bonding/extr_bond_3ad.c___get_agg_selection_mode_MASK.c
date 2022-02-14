
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct port {int dummy; } ;
struct TYPE_2__ {int ad_select; } ;
struct bonding {TYPE_1__ params; } ;


 int VAR_0 ;
 struct bonding* FUNC_0 (struct port*) ;

__attribute__((used)) static inline u32 FUNC_1(struct port *VAR_1)
{
 struct bonding *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0))
  return VAR_0;

 return VAR_2->params.ad_select;
}
