
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {scalar_t__ nr_vnics; int * vnic_info; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_0)
{
 FUNC_0(VAR_0->vnic_info);
 VAR_0->vnic_info = ((void*)0);
 VAR_0->nr_vnics = 0;
}
