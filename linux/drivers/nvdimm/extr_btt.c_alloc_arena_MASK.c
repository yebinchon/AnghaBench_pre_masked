
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btt {int lbasize; TYPE_1__* nd_btt; int sector_size; } ;
struct arena_info {size_t size; size_t external_lba_start; int external_lbasize; int nfree; int internal_nlba; int external_nlba; size_t infooff; int dataoff; int mapoff; int logoff; int info2off; int* log_index; void* internal_lbasize; int version_minor; int version_major; int err_lock; int sector_size; TYPE_1__* nd_btt; } ;
struct TYPE_2__ {int version_minor; int version_major; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,void*) ;
 struct arena_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int,int) ;

__attribute__((used)) static struct arena_info *FUNC_4(struct btt *VAR_6, size_t VAR_7,
    size_t VAR_8, size_t VAR_9)
{
 struct arena_info *VAR_10;
 u64 VAR_11, VAR_12, VAR_13;
 u64 VAR_14 = VAR_7;

 VAR_10 = FUNC_1(sizeof(struct arena_info), VAR_2);
 if (!VAR_10)
  return ((void*)0);
 VAR_10->nd_btt = VAR_6->nd_btt;
 VAR_10->sector_size = VAR_6->sector_size;
 FUNC_2(&VAR_10->err_lock);

 if (!VAR_7)
  return VAR_10;

 VAR_10->size = VAR_7;
 VAR_10->external_lba_start = VAR_8;
 VAR_10->external_lbasize = VAR_6->lbasize;
 VAR_10->internal_lbasize = FUNC_3(VAR_10->external_lbasize,
     VAR_3);
 VAR_10->nfree = VAR_0;
 VAR_10->version_major = VAR_6->nd_btt->version_major;
 VAR_10->version_minor = VAR_6->nd_btt->version_minor;

 if (VAR_14 % VAR_1)
  VAR_14 -= (VAR_14 % VAR_1);


 VAR_14 -= 2 * VAR_1;


 VAR_11 = FUNC_3(VAR_10->nfree * VAR_4, VAR_1);
 VAR_14 -= VAR_11;


 VAR_10->internal_nlba = FUNC_0(VAR_14 - VAR_1,
   VAR_10->internal_lbasize + VAR_5);
 VAR_10->external_nlba = VAR_10->internal_nlba - VAR_10->nfree;

 VAR_12 = FUNC_3((VAR_10->external_nlba * VAR_5), VAR_1);
 VAR_13 = VAR_14 - VAR_12;


 VAR_10->infooff = VAR_9;
 VAR_10->dataoff = VAR_10->infooff + VAR_1;
 VAR_10->mapoff = VAR_10->dataoff + VAR_13;
 VAR_10->logoff = VAR_10->mapoff + VAR_12;
 VAR_10->info2off = VAR_10->logoff + VAR_11;


 VAR_10->log_index[0] = 0;
 VAR_10->log_index[1] = 1;
 return VAR_10;
}
