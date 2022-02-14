
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_op {scalar_t__ opnum; } ;
struct nfsd4_compoundargs {int minorversion; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline bool
FUNC_0(struct nfsd4_compoundargs *VAR_4, struct nfsd4_op *VAR_5)
{
 if (VAR_5->opnum < VAR_0)
  return 0;
 else if (VAR_4->minorversion == 0 && VAR_5->opnum > VAR_1)
  return 0;
 else if (VAR_4->minorversion == 1 && VAR_5->opnum > VAR_2)
  return 0;
 else if (VAR_4->minorversion == 2 && VAR_5->opnum > VAR_3)
  return 0;
 return 1;
}
