
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int ahw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(struct qlcnic_adapter *VAR_3, u32 *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = VAR_0 + 1;
      VAR_6 < FUNC_0(VAR_2); VAR_5++, VAR_6++)
  VAR_4[VAR_5] = FUNC_2(VAR_3, VAR_6);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
  VAR_4[VAR_5++] = FUNC_1(VAR_3->ahw, VAR_6);
 return VAR_5;
}
