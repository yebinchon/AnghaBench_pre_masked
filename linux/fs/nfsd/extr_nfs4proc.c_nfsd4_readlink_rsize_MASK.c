
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct svc_rqst {int dummy; } ;
struct nfsd4_op {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(struct svc_rqst *VAR_2, struct nfsd4_op *VAR_3)
{
 return (VAR_1 + 1) * sizeof(__be32) + VAR_0;
}
