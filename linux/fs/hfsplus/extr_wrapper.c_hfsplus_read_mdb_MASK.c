
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hfsplus_wd {int ablk_size; int embed_start; int embed_count; void* ablk_start; } ;
typedef int __be32 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(void *VAR_10, struct hfsplus_wd *VAR_11)
{
 u32 VAR_12;
 u16 VAR_13;
 __be16 VAR_14;

 VAR_14 = *(__be16 *)(VAR_10 + VAR_7);
 if (VAR_14 != FUNC_2(VAR_1) &&
     VAR_14 != FUNC_2(VAR_2))
  return 0;

 VAR_13 = FUNC_0(*(__be16 *)(VAR_10 + VAR_5));
 if (!(VAR_13 & VAR_8) ||
    !(VAR_13 & VAR_9))
  return 0;

 VAR_11->ablk_size =
  FUNC_1(*(__be32 *)(VAR_10 + VAR_3));
 if (VAR_11->ablk_size < VAR_0)
  return 0;
 if (VAR_11->ablk_size % VAR_0)
  return 0;
 VAR_11->ablk_start =
  FUNC_0(*(__be16 *)(VAR_10 + VAR_4));

 VAR_12 = FUNC_3(VAR_10 + VAR_6);
 VAR_11->embed_start = (VAR_12 >> 16) & 0xFFFF;
 VAR_11->embed_count = VAR_12 & 0xFFFF;

 return 1;
}
