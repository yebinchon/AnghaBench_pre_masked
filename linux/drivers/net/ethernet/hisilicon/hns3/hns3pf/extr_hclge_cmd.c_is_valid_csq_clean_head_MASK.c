
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_cmq_ring {int next_to_use; int next_to_clean; } ;



__attribute__((used)) static int FUNC_0(struct hclge_cmq_ring *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_0->next_to_use;
 int VAR_3 = VAR_0->next_to_clean;

 if (VAR_2 > VAR_3)
  return VAR_1 >= VAR_3 && VAR_1 <= VAR_2;

 return VAR_1 >= VAR_3 || VAR_1 <= VAR_2;
}
