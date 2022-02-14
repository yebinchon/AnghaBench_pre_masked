
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct btf_type {int dummy; } ;
struct btf_member {scalar_t__ type; scalar_t__ offset; } ;
struct btf {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 struct btf_type* FUNC_6 (struct btf const*,scalar_t__*,int *) ;
 scalar_t__ FUNC_7 (struct btf_type const*) ;
 int FUNC_8 (struct btf_type const*) ;
 scalar_t__ FUNC_9 (struct btf_type const*) ;

bool FUNC_10(const struct btf *VAR_0, const struct btf_type *VAR_1,
      const struct btf_member *VAR_2,
      u32 VAR_3, u32 VAR_4)
{
 const struct btf_type *VAR_5;
 u32 VAR_6, VAR_7;
 u8 VAR_8;

 VAR_6 = VAR_2->type;
 VAR_5 = FUNC_6(VAR_0, &VAR_6, ((void*)0));
 if (!VAR_5 || !FUNC_8(VAR_5))
  return 0;

 VAR_7 = FUNC_7(VAR_5);
 VAR_8 = FUNC_2(VAR_7);
 if (FUNC_9(VAR_1)) {
  u32 VAR_9 = FUNC_4(VAR_2->offset);
  u32 VAR_10 = FUNC_5(VAR_2->offset);




  return !VAR_9 &&
         FUNC_1(VAR_10) == VAR_3 &&
         FUNC_1(VAR_8) == VAR_4;
 }

 if (FUNC_3(VAR_7) ||
     FUNC_0(VAR_2->offset) ||
     FUNC_1(VAR_2->offset) != VAR_3 ||
     FUNC_0(VAR_8) ||
     FUNC_1(VAR_8) != VAR_4)
  return 0;

 return 1;
}
