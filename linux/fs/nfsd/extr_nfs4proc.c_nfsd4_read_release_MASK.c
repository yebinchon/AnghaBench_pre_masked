
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rd_length; int rd_offset; int rd_fhp; int rd_rqstp; scalar_t__ rd_nf; } ;
union nfsd4_op_u {TYPE_1__ read; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(union nfsd4_op_u *VAR_0)
{
 if (VAR_0->read.rd_nf)
  FUNC_0(VAR_0->read.rd_nf);
 FUNC_1(VAR_0->read.rd_rqstp, VAR_0->read.rd_fhp,
        VAR_0->read.rd_offset, VAR_0->read.rd_length);
}
