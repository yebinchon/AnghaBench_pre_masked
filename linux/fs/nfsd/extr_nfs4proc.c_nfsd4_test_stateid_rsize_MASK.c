
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct TYPE_3__ {int ts_num_ids; } ;
struct TYPE_4__ {TYPE_1__ test_stateid; } ;
struct nfsd4_op {TYPE_2__ u; } ;
typedef int __be32 ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct svc_rqst *VAR_1, struct nfsd4_op *VAR_2)
{
 return (VAR_0 + 1 + VAR_2->u.test_stateid.ts_num_ids)
  * sizeof(__be32);
}
