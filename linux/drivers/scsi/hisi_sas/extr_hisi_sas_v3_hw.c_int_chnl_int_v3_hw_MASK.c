
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hisi_hba*,int) ;
 int FUNC_1 (struct hisi_hba*,int) ;
 int FUNC_2 (struct hisi_hba*,int) ;
 int FUNC_3 (struct hisi_hba*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct hisi_hba *VAR_4 = VAR_3;
 u32 VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_3(VAR_4, VAR_0)
    & 0xeeeeeeee;

 while (VAR_5) {
  if (VAR_5 & (2 << (VAR_6 * 4)))
   FUNC_0(VAR_4, VAR_6);

  if (VAR_5 & (4 << (VAR_6 * 4)))
   FUNC_1(VAR_4, VAR_6);

  if (VAR_5 & (8 << (VAR_6 * 4)))
   FUNC_2(VAR_4, VAR_6);

  VAR_5 &= ~(0xe << (VAR_6 * 4));
  VAR_6++;
 }

 return VAR_1;
}
