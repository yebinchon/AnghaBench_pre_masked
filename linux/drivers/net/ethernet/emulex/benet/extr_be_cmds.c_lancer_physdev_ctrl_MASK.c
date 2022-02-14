
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_adapter {scalar_t__ db; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct be_adapter*) ;

int FUNC_2(struct be_adapter *VAR_1, u32 VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_2, VAR_1->db + VAR_0);

 return VAR_3;
}
