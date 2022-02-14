
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct nfsd4_sequence {void* cachethis; void* maxslots; void* slotid; void* seqid; TYPE_1__ sessionid; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_4,
        struct nfsd4_sequence *VAR_5)
{
 VAR_0;

 FUNC_1(VAR_2 + 16);
 FUNC_0(VAR_5->sessionid.data, VAR_2);
 VAR_5->seqid = FUNC_2(VAR_3++);
 VAR_5->slotid = FUNC_2(VAR_3++);
 VAR_5->maxslots = FUNC_2(VAR_3++);
 VAR_5->cachethis = FUNC_2(VAR_3++);

 VAR_1;
}
