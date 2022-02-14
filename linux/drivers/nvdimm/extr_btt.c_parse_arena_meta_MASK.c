
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btt_sb {scalar_t__ nextoff; scalar_t__ dataoff; scalar_t__ mapoff; scalar_t__ logoff; scalar_t__ info2off; int flags; int version_minor; int version_major; int nfree; int external_lbasize; int external_nlba; int internal_lbasize; int internal_nlba; } ;
struct arena_info {scalar_t__ infooff; scalar_t__ info2off; void* flags; scalar_t__ size; scalar_t__ logoff; scalar_t__ mapoff; scalar_t__ dataoff; scalar_t__ nextoff; void* version_minor; void* version_major; void* nfree; void* external_lbasize; void* external_nlba; void* internal_lbasize; void* internal_nlba; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct arena_info *VAR_1, struct btt_sb *VAR_2,
    u64 VAR_3)
{
 VAR_1->internal_nlba = FUNC_1(VAR_2->internal_nlba);
 VAR_1->internal_lbasize = FUNC_1(VAR_2->internal_lbasize);
 VAR_1->external_nlba = FUNC_1(VAR_2->external_nlba);
 VAR_1->external_lbasize = FUNC_1(VAR_2->external_lbasize);
 VAR_1->nfree = FUNC_1(VAR_2->nfree);
 VAR_1->version_major = FUNC_0(VAR_2->version_major);
 VAR_1->version_minor = FUNC_0(VAR_2->version_minor);

 VAR_1->nextoff = (VAR_2->nextoff == 0) ? 0 : (VAR_3 +
   FUNC_2(VAR_2->nextoff));
 VAR_1->infooff = VAR_3;
 VAR_1->dataoff = VAR_3 + FUNC_2(VAR_2->dataoff);
 VAR_1->mapoff = VAR_3 + FUNC_2(VAR_2->mapoff);
 VAR_1->logoff = VAR_3 + FUNC_2(VAR_2->logoff);
 VAR_1->info2off = VAR_3 + FUNC_2(VAR_2->info2off);

 VAR_1->size = (FUNC_2(VAR_2->nextoff) > 0)
  ? (FUNC_2(VAR_2->nextoff))
  : (VAR_1->info2off - VAR_1->infooff + VAR_0);

 VAR_1->flags = FUNC_1(VAR_2->flags);
}
