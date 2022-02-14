
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct secaeskeytoken {int mkvp; scalar_t__ bitsize; } ;
struct pkey_apqn {int domain; int card; } ;
struct keytoken_header {scalar_t__ type; scalar_t__ version; } ;
struct cipherkeytoken {int wpllen; int mkvp0; int plfver; } ;
typedef enum pkey_key_type { ____Placeholder_pkey_key_type } pkey_key_type ;
typedef enum pkey_key_size { ____Placeholder_pkey_key_size } pkey_key_size ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int,int const*,int ,int) ;
 int FUNC_1 (int ,int,int const*,int ) ;
 int FUNC_2 (int **,int *,int ,int ,int ,int ,int ,int) ;
 int VAR_15 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const u8 *VAR_16, size_t VAR_17,
      u16 *VAR_18, u16 *VAR_19,
      enum pkey_key_type *VAR_20,
      enum pkey_key_size *VAR_21, u32 *VAR_22)
{
 int VAR_23;
 u32 VAR_24, *VAR_25 = ((void*)0);
 struct keytoken_header *VAR_26 = (struct keytoken_header *)VAR_16;

 if (VAR_17 < sizeof(struct keytoken_header) ||
     VAR_26->type != VAR_10)
  return -VAR_0;

 if (VAR_26->version == VAR_11) {
  struct secaeskeytoken *VAR_27 = (struct secaeskeytoken *)VAR_16;

  VAR_23 = FUNC_1(VAR_15, 3, VAR_16, 0);
  if (VAR_23)
   goto out;
  if (VAR_20)
   *VAR_20 = VAR_9;
  if (VAR_21)
   *VAR_21 = (enum pkey_key_size) VAR_27->bitsize;

  VAR_23 = FUNC_2(&VAR_25, &VAR_24, *VAR_18, *VAR_19,
       VAR_13, VAR_27->mkvp, 0, 1);
  if (VAR_23 == 0 && VAR_22)
   *VAR_22 = VAR_3;
  if (VAR_23 == -VAR_1) {
   VAR_23 = FUNC_2(&VAR_25, &VAR_24,
        *VAR_18, *VAR_19,
        VAR_13, 0, VAR_27->mkvp, 1);
   if (VAR_23 == 0 && VAR_22)
    *VAR_22 = VAR_2;
  }
  if (VAR_23)
   goto out;

  *VAR_18 = ((struct pkey_apqn *)VAR_25)->card;
  *VAR_19 = ((struct pkey_apqn *)VAR_25)->domain;

 } else if (VAR_26->version == VAR_12) {
  struct cipherkeytoken *VAR_28 = (struct cipherkeytoken *)VAR_16;

  VAR_23 = FUNC_0(VAR_15, 3, VAR_16, 0, 1);
  if (VAR_23)
   goto out;
  if (VAR_20)
   *VAR_20 = VAR_8;
  if (VAR_21) {
   *VAR_21 = VAR_7;
   if (!VAR_28->plfver && VAR_28->wpllen == 512)
    *VAR_21 = VAR_4;
   else if (!VAR_28->plfver && VAR_28->wpllen == 576)
    *VAR_21 = VAR_5;
   else if (!VAR_28->plfver && VAR_28->wpllen == 640)
    *VAR_21 = VAR_6;
  }

  VAR_23 = FUNC_2(&VAR_25, &VAR_24, *VAR_18, *VAR_19,
       VAR_14, VAR_28->mkvp0, 0, 1);
  if (VAR_23 == 0 && VAR_22)
   *VAR_22 = VAR_3;
  if (VAR_23 == -VAR_1) {
   VAR_23 = FUNC_2(&VAR_25, &VAR_24,
        *VAR_18, *VAR_19,
        VAR_14, 0, VAR_28->mkvp0, 1);
   if (VAR_23 == 0 && VAR_22)
    *VAR_22 = VAR_2;
  }
  if (VAR_23)
   goto out;

  *VAR_18 = ((struct pkey_apqn *)VAR_25)->card;
  *VAR_19 = ((struct pkey_apqn *)VAR_25)->domain;

 } else
  VAR_23 = -VAR_0;

out:
 FUNC_3(VAR_25);
 return VAR_23;
}
