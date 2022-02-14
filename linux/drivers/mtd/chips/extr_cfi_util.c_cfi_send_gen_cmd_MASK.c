
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_char ;
struct map_info {int dummy; } ;
struct cfi_private {int dummy; } ;
typedef int map_word ;


 int FUNC_0 (int ,struct map_info*,struct cfi_private*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct map_info*,struct cfi_private*) ;
 int FUNC_2 (struct map_info*,scalar_t__) ;
 int FUNC_3 (struct map_info*,int ,scalar_t__) ;

uint32_t FUNC_4(u_char VAR_0, uint32_t VAR_1, uint32_t VAR_2,
    struct map_info *VAR_3, struct cfi_private *VAR_4,
    int VAR_5, map_word *VAR_6)
{
 map_word VAR_7;
 uint32_t VAR_8 = VAR_2 + FUNC_1(VAR_1, VAR_3, VAR_4);
 VAR_7 = FUNC_0(VAR_0, VAR_3, VAR_4);

 if (VAR_6)
  *VAR_6 = FUNC_2(VAR_3, VAR_8);

 FUNC_3(VAR_3, VAR_7, VAR_8);

 return VAR_8 - VAR_2;
}
