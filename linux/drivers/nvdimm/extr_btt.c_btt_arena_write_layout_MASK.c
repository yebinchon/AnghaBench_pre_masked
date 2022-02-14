
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct nd_gen_sb {int dummy; } ;
struct nd_btt {int const* uuid; TYPE_1__* ndns; } ;
struct btt_sb {void* checksum; void* flags; void* info2off; void* logoff; void* mapoff; void* dataoff; void* nextoff; void* infosize; void* nfree; void* internal_nlba; void* internal_lbasize; void* external_nlba; void* external_lbasize; void* version_minor; void* version_major; int parent_uuid; int uuid; int signature; } ;
struct arena_info {int flags; int external_lbasize; int external_nlba; int internal_lbasize; int internal_nlba; int nfree; scalar_t__ infooff; scalar_t__ info2off; scalar_t__ logoff; scalar_t__ mapoff; scalar_t__ dataoff; scalar_t__ nextoff; int version_minor; int version_major; struct nd_btt* nd_btt; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arena_info*,struct btt_sb*) ;
 int FUNC_1 (struct arena_info*) ;
 int FUNC_2 (struct arena_info*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct btt_sb*) ;
 struct btt_sb* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int const*,int) ;
 int * FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct nd_gen_sb*) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct arena_info *VAR_4)
{
 int VAR_5;
 u64 VAR_6;
 struct btt_sb *VAR_7;
 struct nd_btt *VAR_8 = VAR_4->nd_btt;
 const u8 *VAR_9 = FUNC_9(&VAR_8->ndns->dev);

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_7 = FUNC_7(sizeof(struct btt_sb), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_11(VAR_7->signature, VAR_0, VAR_1);
 FUNC_8(VAR_7->uuid, VAR_8->uuid, 16);
 FUNC_8(VAR_7->parent_uuid, VAR_9, 16);
 VAR_7->flags = FUNC_4(VAR_4->flags);
 VAR_7->version_major = FUNC_3(VAR_4->version_major);
 VAR_7->version_minor = FUNC_3(VAR_4->version_minor);
 VAR_7->external_lbasize = FUNC_4(VAR_4->external_lbasize);
 VAR_7->external_nlba = FUNC_4(VAR_4->external_nlba);
 VAR_7->internal_lbasize = FUNC_4(VAR_4->internal_lbasize);
 VAR_7->internal_nlba = FUNC_4(VAR_4->internal_nlba);
 VAR_7->nfree = FUNC_4(VAR_4->nfree);
 VAR_7->infosize = FUNC_4(sizeof(struct btt_sb));
 VAR_7->nextoff = FUNC_5(VAR_4->nextoff);




 VAR_7->dataoff = FUNC_5(VAR_4->dataoff - VAR_4->infooff);
 VAR_7->mapoff = FUNC_5(VAR_4->mapoff - VAR_4->infooff);
 VAR_7->logoff = FUNC_5(VAR_4->logoff - VAR_4->infooff);
 VAR_7->info2off = FUNC_5(VAR_4->info2off - VAR_4->infooff);

 VAR_7->flags = 0;
 VAR_6 = FUNC_10((struct nd_gen_sb *) VAR_7);
 VAR_7->checksum = FUNC_5(VAR_6);

 VAR_5 = FUNC_0(VAR_4, VAR_7);

 FUNC_6(VAR_7);
 return VAR_5;
}
