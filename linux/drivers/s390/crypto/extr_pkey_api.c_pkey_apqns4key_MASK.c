
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct secaeskeytoken {int mkvp; } ;
struct pkey_apqn {int dummy; } ;
struct keytoken_header {scalar_t__ type; scalar_t__ version; } ;
struct cipherkeytoken {int mkvp0; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__**,scalar_t__*,int,int,int,int ,int ,int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct pkey_apqn*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_9, size_t VAR_10, u32 VAR_11,
     struct pkey_apqn *VAR_12, size_t *VAR_13)
{
 int VAR_14 = VAR_0;
 u32 VAR_15, *VAR_16 = ((void*)0);
 struct keytoken_header *VAR_17 = (struct keytoken_header *)VAR_9;

 if (VAR_10 < sizeof(struct keytoken_header) ||
     VAR_17->type != VAR_4 ||
     VAR_11 == 0)
  return -VAR_0;

 if (VAR_17->version == VAR_5 || VAR_17->version == VAR_6) {
  int VAR_18 = VAR_7;
  u64 VAR_19 = 0, VAR_20 = 0;

  if (VAR_17->version == VAR_5) {
   struct secaeskeytoken *VAR_21 = (struct secaeskeytoken *)VAR_9;

   if (VAR_11 & VAR_3)
    VAR_19 = VAR_21->mkvp;
   if (VAR_11 & VAR_2)
    VAR_20 = VAR_21->mkvp;
  } else {
   struct cipherkeytoken *VAR_22 = (struct cipherkeytoken *)VAR_9;

   VAR_18 = VAR_8;
   if (VAR_11 & VAR_3)
    VAR_19 = VAR_22->mkvp0;
   if (VAR_11 & VAR_2)
    VAR_20 = VAR_22->mkvp0;
  }
  VAR_14 = FUNC_0(&VAR_16, &VAR_15, 0xFFFF, 0xFFFF,
       VAR_18, VAR_19, VAR_20, 1);
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
