
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct pkey_apqn {int dummy; } ;
typedef enum pkey_key_type { ____Placeholder_pkey_key_type } pkey_key_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int**,int*,int,int,int,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct pkey_apqn*,int*,int) ;

__attribute__((used)) static int FUNC_3(enum pkey_key_type VAR_8,
         u8 VAR_9[32], u8 VAR_10[32], u32 VAR_11,
         struct pkey_apqn *VAR_12, size_t *VAR_13)
{
 int VAR_14 = -VAR_0;
 u32 VAR_15, *VAR_16 = ((void*)0);

 if (VAR_8 == VAR_5 || VAR_8 == VAR_4) {
  u64 VAR_17 = 0, VAR_18 = 0;
  int VAR_19 = VAR_6;

  if (VAR_11 & VAR_3)
   VAR_17 = *((u64 *) VAR_17);
  if (VAR_11 & VAR_2)
   VAR_18 = *((u64 *) VAR_10);
  if (VAR_8 == VAR_4)
   VAR_19 = VAR_7;
  VAR_14 = FUNC_0(&VAR_16, &VAR_15, 0xFFFF, 0xFFFF,
       VAR_19, VAR_17, VAR_18, 1);
  if (VAR_14)
   goto out;
  if (VAR_12) {
   if (*VAR_13 < VAR_15)
    VAR_14 = -VAR_1;
   else
    FUNC_2(VAR_12, VAR_16, VAR_15 * sizeof(u32));
  }
  *VAR_13 = VAR_15;
 }

out:
 FUNC_1(VAR_16);
 return VAR_14;
}
