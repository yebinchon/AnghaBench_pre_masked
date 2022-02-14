
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_lock_args {int lock_seqid; int lock_stateid; int lock_owner; int open_stateid; int open_seqid; scalar_t__ new_lock_owner; TYPE_1__* fl; scalar_t__ reclaim; int block; } ;
struct compound_hdr {int dummy; } ;
typedef void* __be32 ;
struct TYPE_3__ {int fl_start; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int ) ;
 int FUNC_3 (struct xdr_stream*,int *) ;
 int FUNC_4 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 void** FUNC_7 (struct xdr_stream*,int) ;
 void** FUNC_8 (void**,int ) ;

__attribute__((used)) static void FUNC_9(struct xdr_stream *VAR_2, const struct nfs_lock_args *VAR_3, struct compound_hdr *VAR_4)
{
 __be32 *VAR_5;

 FUNC_4(VAR_2, VAR_0, VAR_1, VAR_4);
 VAR_5 = FUNC_7(VAR_2, 28);
 *VAR_5++ = FUNC_0(FUNC_6(VAR_3->fl, VAR_3->block));
 *VAR_5++ = FUNC_0(VAR_3->reclaim);
 VAR_5 = FUNC_8(VAR_5, VAR_3->fl->fl_start);
 VAR_5 = FUNC_8(VAR_5, FUNC_5(VAR_3->fl));
 *VAR_5 = FUNC_0(VAR_3->new_lock_owner);
 if (VAR_3->new_lock_owner){
  FUNC_2(VAR_2, VAR_3->open_seqid);
  FUNC_3(VAR_2, &VAR_3->open_stateid);
  FUNC_2(VAR_2, VAR_3->lock_seqid);
  FUNC_1(VAR_2, &VAR_3->lock_owner);
 }
 else {
  FUNC_3(VAR_2, &VAR_3->lock_stateid);
  FUNC_2(VAR_2, VAR_3->lock_seqid);
 }
}
