
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_ucode_tlv {int length; } ;


 scalar_t__ FUNC_0 (size_t) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static inline size_t FUNC_2(const struct iwl_ucode_tlv *VAR_0,
     size_t VAR_1, size_t VAR_2)
{
 size_t VAR_3 = FUNC_1(VAR_0->length) - VAR_1;

 if (FUNC_0(VAR_3 % VAR_2))
  return 0;

 return VAR_3 / VAR_2;
}
