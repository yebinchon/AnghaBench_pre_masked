
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_fsinfo {scalar_t__ lease_time; int time_delta; int maxfilesize; void* dtpref; void* wtmult; void* wtpref; void* wtmax; void* rtmult; void* rtpref; void* rtmax; } ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_1,
          struct nfs_fsinfo *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_4(VAR_1, 4 * 7 + 8 + 8 + 4);
 if (FUNC_1(!VAR_3))
  return -VAR_0;
 VAR_2->rtmax = FUNC_0(VAR_3++);
 VAR_2->rtpref = FUNC_0(VAR_3++);
 VAR_2->rtmult = FUNC_0(VAR_3++);
 VAR_2->wtmax = FUNC_0(VAR_3++);
 VAR_2->wtpref = FUNC_0(VAR_3++);
 VAR_2->wtmult = FUNC_0(VAR_3++);
 VAR_2->dtpref = FUNC_0(VAR_3++);
 VAR_3 = FUNC_3(VAR_3, &VAR_2->maxfilesize);
 FUNC_2(VAR_3, &VAR_2->time_delta);


 VAR_2->lease_time = 0;
 return 0;
}
