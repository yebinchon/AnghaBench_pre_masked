
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct TYPE_3__ {int rd_maxcount; } ;
struct TYPE_4__ {TYPE_1__ readdir; } ;
struct nfsd4_op {TYPE_2__ u; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct svc_rqst*) ;

__attribute__((used)) static inline u32 FUNC_3(struct svc_rqst *VAR_2, struct nfsd4_op *VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0;

 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = FUNC_1(VAR_3->u.readdir.rd_maxcount, VAR_4);

 return (VAR_0 + VAR_1 +
  FUNC_0(VAR_5)) * sizeof(__be32);
}
