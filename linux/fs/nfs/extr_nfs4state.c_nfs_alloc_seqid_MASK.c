
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_seqid_counter {int dummy; } ;
struct nfs_seqid {int * task; int list; struct nfs_seqid_counter* sequence; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct nfs_seqid* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct nfs_seqid* FUNC_2 (int,int ) ;

struct nfs_seqid *FUNC_3(struct nfs_seqid_counter *VAR_1, gfp_t VAR_2)
{
 struct nfs_seqid *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_2);
 if (VAR_3 == ((void*)0))
  return FUNC_0(-VAR_0);
 VAR_3->sequence = VAR_1;
 FUNC_1(&VAR_3->list);
 VAR_3->task = ((void*)0);
 return VAR_3;
}
