
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ nfs4_stateid ;






__attribute__((used)) static const nfs4_stateid *
FUNC_0(const nfs4_stateid *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);
 switch (VAR_0->type) {
 case 128:
 case 129:
 case 130:
  return VAR_0;
 default:
  break;
 }
 return ((void*)0);
}
