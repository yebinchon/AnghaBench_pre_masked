
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_cacherep {int c_lru; int c_timestamp; } ;
struct nfsd_drc_bucket {int lru_head; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct nfsd_drc_bucket *VAR_1, struct svc_cacherep *VAR_2)
{
 VAR_2->c_timestamp = VAR_0;
 FUNC_0(&VAR_2->c_lru, &VAR_1->lru_head);
}
