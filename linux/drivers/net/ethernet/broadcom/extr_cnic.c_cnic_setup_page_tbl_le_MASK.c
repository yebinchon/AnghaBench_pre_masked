
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cnic_dma {int num_pages; int* pg_map_arr; scalar_t__ pgtbl; } ;
struct cnic_dev {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct cnic_dev *VAR_0, struct cnic_dma *VAR_1)
{
 int VAR_2;
 __le32 *VAR_3 = (__le32 *) VAR_1->pgtbl;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pages; VAR_2++) {

  *VAR_3 = FUNC_0(VAR_1->pg_map_arr[VAR_2] & 0xffffffff);
  VAR_3++;
  *VAR_3 = FUNC_0((u64) VAR_1->pg_map_arr[VAR_2] >> 32);
  VAR_3++;
 }
}
