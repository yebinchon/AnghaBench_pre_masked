
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct scatterlist {int dummy; } ;
struct iscsi_cmd {size_t kmapped_nents; struct scatterlist* first_data_sg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_2(struct iscsi_cmd *VAR_0)
{
 u32 VAR_1;
 struct scatterlist *VAR_2;

 VAR_2 = VAR_0->first_data_sg;

 for (VAR_1 = 0; VAR_1 < VAR_0->kmapped_nents; VAR_1++)
  FUNC_0(FUNC_1(&VAR_2[VAR_1]));
}
