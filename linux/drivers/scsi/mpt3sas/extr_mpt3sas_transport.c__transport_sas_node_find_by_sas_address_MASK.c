
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct _sas_node {scalar_t__ sas_address; } ;
struct MPT3SAS_ADAPTER {struct _sas_node sas_hba; } ;


 struct _sas_node* FUNC_0 (struct MPT3SAS_ADAPTER*,scalar_t__) ;

__attribute__((used)) static struct _sas_node *
FUNC_1(struct MPT3SAS_ADAPTER *VAR_0,
 u64 VAR_1)
{
 if (VAR_0->sas_hba.sas_address == VAR_1)
  return &VAR_0->sas_hba;
 else
  return FUNC_0(VAR_0,
      VAR_1);
}
