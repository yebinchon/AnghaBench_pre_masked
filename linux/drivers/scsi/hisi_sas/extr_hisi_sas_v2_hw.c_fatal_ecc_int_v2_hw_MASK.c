
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hisi_hba*,int ) ;
 int FUNC_1 (struct hisi_hba*,int ,int) ;
 int FUNC_2 (struct hisi_hba*,int) ;
 int FUNC_3 (struct hisi_hba*,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct hisi_hba *VAR_5 = VAR_4;
 u32 VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_2);
 FUNC_1(VAR_5, VAR_2, VAR_7 | 0xffffffff);

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6) {
  FUNC_3(VAR_5, VAR_6);
  FUNC_2(VAR_5, VAR_6);
 }

 FUNC_1(VAR_5, VAR_1, VAR_6);
 FUNC_1(VAR_5, VAR_2, VAR_7);

 return VAR_0;
}
