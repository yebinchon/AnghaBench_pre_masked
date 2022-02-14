
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {int intr_coal_ticks; int intr_coal_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hisi_hba*) ;
 int FUNC_1 (struct hisi_hba*,int ,int) ;
 int FUNC_2 (struct hisi_hba*) ;

__attribute__((used)) static void FUNC_3(struct hisi_hba *VAR_3)
{

 FUNC_0(VAR_3);

 if (VAR_3->intr_coal_ticks == 0 ||
     VAR_3->intr_coal_count == 0) {
  FUNC_1(VAR_3, VAR_0, 0x1);
  FUNC_1(VAR_3, VAR_2, 0x1);
  FUNC_1(VAR_3, VAR_1, 0x1);
 } else {
  FUNC_1(VAR_3, VAR_0, 0x3);
  FUNC_1(VAR_3, VAR_2,
     VAR_3->intr_coal_ticks);
  FUNC_1(VAR_3, VAR_1,
     VAR_3->intr_coal_count);
 }
 FUNC_2(VAR_3);
}
