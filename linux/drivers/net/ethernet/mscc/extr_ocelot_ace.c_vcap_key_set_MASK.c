
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vcap_data {scalar_t__ key_offset; int mask; int entry; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vcap_data *VAR_0, u32 VAR_1, u32 VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 FUNC_0(VAR_0->entry, VAR_1 + VAR_0->key_offset, VAR_2, VAR_3);
 FUNC_0(VAR_0->mask, VAR_1 + VAR_0->key_offset, VAR_2, VAR_4);
}
