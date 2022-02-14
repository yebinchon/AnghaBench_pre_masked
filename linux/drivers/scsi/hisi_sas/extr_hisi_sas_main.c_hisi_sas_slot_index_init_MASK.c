
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_hba {int slot_index_count; } ;


 int FUNC_0 (struct hisi_hba*,int) ;

__attribute__((used)) static void FUNC_1(struct hisi_hba *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->slot_index_count; ++VAR_1)
  FUNC_0(VAR_0, VAR_1);
}
