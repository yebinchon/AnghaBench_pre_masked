
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_msi {scalar_t__ inner_domain; scalar_t__ msi_domain; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct iproc_msi *VAR_0)
{
 if (VAR_0->msi_domain)
  FUNC_0(VAR_0->msi_domain);

 if (VAR_0->inner_domain)
  FUNC_0(VAR_0->inner_domain);
}
