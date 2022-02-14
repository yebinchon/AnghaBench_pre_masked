
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct xdr_stream {int dummy; } ;
struct nfsd4_exchange_id {int seqid; int flags; int spa_how; int * spo_must_allow; int * spo_must_enforce; int clientid; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;
struct TYPE_2__ {char* nodename; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct xdr_stream*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 () ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,char*,int) ;
 int * FUNC_8 (int *,int *,int) ;
 int * FUNC_9 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_10(struct nfsd4_compoundres *VAR_1, __be32 VAR_2,
    struct nfsd4_exchange_id *VAR_3)
{
 struct xdr_stream *VAR_4 = &VAR_1->xdr;
 __be32 *VAR_5;
 char *VAR_6;
 char *VAR_7;
 int VAR_8;
 int VAR_9;
 uint64_t VAR_10 = 0;

 VAR_6 = FUNC_5()->nodename;
 VAR_8 = FUNC_4(VAR_6);
 VAR_7 = FUNC_5()->nodename;
 VAR_9 = FUNC_4(VAR_7);

 VAR_5 = FUNC_9(VAR_4,
  8 +
  4 +
  4 +
  4 );
 if (!VAR_5)
  return VAR_0;

 VAR_5 = FUNC_8(VAR_5, &VAR_3->clientid, 8);
 *VAR_5++ = FUNC_2(VAR_3->seqid);
 *VAR_5++ = FUNC_2(VAR_3->flags);

 *VAR_5++ = FUNC_2(VAR_3->spa_how);

 switch (VAR_3->spa_how) {
 case 128:
  break;
 case 129:

  VAR_2 = FUNC_3(VAR_4,
     VAR_3->spo_must_enforce[0],
     VAR_3->spo_must_enforce[1],
     VAR_3->spo_must_enforce[2]);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_3(VAR_4,
     VAR_3->spo_must_allow[0],
     VAR_3->spo_must_allow[1],
     VAR_3->spo_must_allow[2]);
  if (VAR_2)
   return VAR_2;
  break;
 default:
  FUNC_0(1);
 }

 VAR_5 = FUNC_9(VAR_4,
  8 +
  4 +
  (FUNC_1(VAR_8) * 4) +
  4 +
  (FUNC_1(VAR_9) * 4) +
  4 );
 if (!VAR_5)
  return VAR_0;


 VAR_5 = FUNC_6(VAR_5, VAR_10);

 VAR_5 = FUNC_7(VAR_5, VAR_6, VAR_8);


 VAR_5 = FUNC_7(VAR_5, VAR_7, VAR_9);


 *VAR_5++ = FUNC_2(0);
 return 0;
}
