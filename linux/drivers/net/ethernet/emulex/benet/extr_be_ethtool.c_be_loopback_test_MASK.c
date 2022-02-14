
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct be_adapter {int hba_port_num; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*,int ,int ,int,int,int) ;
 int FUNC_1 (struct be_adapter*,int ,int ,int) ;

__attribute__((used)) static u64 FUNC_2(struct be_adapter *VAR_1, u8 VAR_2,
       u64 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_1->hba_port_num,
      VAR_2, 1);
 if (VAR_4)
  return VAR_4;

 *VAR_3 = FUNC_0(VAR_1, VAR_1->hba_port_num,
           VAR_2, 1500, 2, 0xabc);

 VAR_4 = FUNC_1(VAR_1, VAR_1->hba_port_num,
      VAR_0, 1);
 if (VAR_4)
  return VAR_4;

 return *VAR_3;
}
