
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int wr_bytes_written; } ;
struct nfsd4_copy {size_t cp_count; TYPE_3__ cp_res; TYPE_2__* nf_dst; TYPE_1__* nf_src; int cp_synchronous; int cp_dst_pos; int cp_src_pos; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {int nf_file; } ;
struct TYPE_4__ {int nf_file; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct nfsd4_copy *VAR_0)
{
 ssize_t VAR_1 = 0;
 size_t VAR_2 = VAR_0->cp_count;
 u64 VAR_3 = VAR_0->cp_src_pos;
 u64 VAR_4 = VAR_0->cp_dst_pos;

 do {
  if (FUNC_0())
   break;
  VAR_1 = FUNC_1(VAR_0->nf_src->nf_file,
    VAR_3, VAR_0->nf_dst->nf_file, VAR_4,
    VAR_2);
  if (VAR_1 <= 0)
   break;
  VAR_2 -= VAR_1;
  VAR_0->cp_res.wr_bytes_written += VAR_1;
  VAR_3 += VAR_1;
  VAR_4 += VAR_1;
 } while (VAR_2 > 0 && !VAR_0->cp_synchronous);
 return VAR_1;
}
