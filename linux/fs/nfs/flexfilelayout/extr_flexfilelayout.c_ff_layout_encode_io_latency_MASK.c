
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs4_ff_io_stat {int aggregate_completion_time; int total_busy_time; int bytes_not_delivered; int bytes_completed; int ops_completed; int bytes_requested; int ops_requested; } ;
typedef int __be32 ;


 int FUNC_0 (struct xdr_stream*,int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void
FUNC_3(struct xdr_stream *VAR_0,
       struct nfs4_ff_io_stat *VAR_1)
{
 __be32 *VAR_2;

 VAR_2 = FUNC_2(VAR_0, 5 * 8);
 VAR_2 = FUNC_1(VAR_2, VAR_1->ops_requested);
 VAR_2 = FUNC_1(VAR_2, VAR_1->bytes_requested);
 VAR_2 = FUNC_1(VAR_2, VAR_1->ops_completed);
 VAR_2 = FUNC_1(VAR_2, VAR_1->bytes_completed);
 VAR_2 = FUNC_1(VAR_2, VAR_1->bytes_not_delivered);
 FUNC_0(VAR_0, VAR_1->total_busy_time);
 FUNC_0(VAR_0, VAR_1->aggregate_completion_time);
}
