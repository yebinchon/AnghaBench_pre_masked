
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hisi_hba*,int) ;
 int FUNC_1 (struct hisi_hba*,int,int ) ;
 int FUNC_2 (struct hisi_hba*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_5, int VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_0);

 if (VAR_7 & VAR_2)
  FUNC_0(VAR_5, VAR_6);

 FUNC_2(VAR_5, VAR_6, VAR_0,
        VAR_7 & (~VAR_4)
        & (~VAR_3)
        & (~VAR_1));
}
