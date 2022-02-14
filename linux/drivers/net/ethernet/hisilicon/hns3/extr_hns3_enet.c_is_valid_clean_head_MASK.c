
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {int next_to_use; int next_to_clean; int desc_num; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct hns3_enet_ring *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->next_to_use;
 int VAR_3 = VAR_0->next_to_clean;

 if (FUNC_0(VAR_1 > VAR_0->desc_num))
  return 0;

 return VAR_2 > VAR_3 ? (VAR_1 > VAR_3 && VAR_1 <= VAR_2) : (VAR_1 > VAR_3 || VAR_1 <= VAR_2);
}
