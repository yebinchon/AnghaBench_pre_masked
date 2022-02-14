
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct be_mcc_wrb {int embedded; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct be_mcc_wrb*) ;
 int FUNC_2 (struct be_mcc_wrb*,int ) ;
 int FUNC_3 (struct be_mcc_wrb*,struct be_mcc_wrb*,int) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;
 struct be_mcc_wrb* FUNC_5 (struct be_adapter*) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

__attribute__((used)) static struct be_mcc_wrb *FUNC_7(struct be_adapter *VAR_1,
          struct be_mcc_wrb *VAR_2)
{
 struct be_mcc_wrb *VAR_3;

 if (FUNC_4(VAR_1)) {
  VAR_3 = FUNC_6(VAR_1);
  if (!VAR_3)
   return ((void*)0);
 } else {
  VAR_3 = FUNC_5(VAR_1);
 }

 FUNC_3(VAR_3, VAR_2, sizeof(*VAR_2));
 if (VAR_2->embedded & FUNC_0(VAR_0))
  FUNC_2(VAR_3, (ulong) FUNC_1(VAR_2));

 return VAR_3;
}
