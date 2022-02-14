
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hisi_hba*,int ) ;
 int FUNC_1 (struct hisi_hba*,int ,int) ;
 int FUNC_2 (struct hisi_hba*,int) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_1, 0xffffffff);

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3)
  FUNC_2(VAR_2, VAR_3);

 FUNC_1(VAR_2, VAR_0, VAR_3);
 FUNC_1(VAR_2, VAR_1, VAR_4);
}
