
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_seq_data {int tc_index_bitmap_bits; int tc_index_bitmap; void** tc_index_array; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct asd_seq_data *VAR_0, void *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->tc_index_bitmap,
        VAR_0->tc_index_bitmap_bits);
 if (VAR_2 == VAR_0->tc_index_bitmap_bits)
  return -1;

 VAR_0->tc_index_array[VAR_2] = VAR_1;
 FUNC_1(VAR_2, VAR_0->tc_index_bitmap);

 return VAR_2;
}
