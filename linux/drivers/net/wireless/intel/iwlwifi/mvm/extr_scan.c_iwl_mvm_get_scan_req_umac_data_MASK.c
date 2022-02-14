
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int data; } ;
struct iwl_scan_req_umac {TYPE_1__ v1; TYPE_4__ v6; TYPE_3__ v7; TYPE_2__ v8; } ;
struct iwl_mvm {struct iwl_scan_req_umac* scan_cmd; } ;


 scalar_t__ FUNC_0 (struct iwl_mvm*) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*) ;

__attribute__((used)) static inline void *FUNC_3(struct iwl_mvm *VAR_0)
{
 struct iwl_scan_req_umac *VAR_1 = VAR_0->scan_cmd;

 if (FUNC_2(VAR_0))
  return (void *)&VAR_1->v8.data;

 if (FUNC_1(VAR_0))
  return (void *)&VAR_1->v7.data;

 if (FUNC_0(VAR_0))
  return (void *)&VAR_1->v6.data;

 return (void *)&VAR_1->v1.data;
}
