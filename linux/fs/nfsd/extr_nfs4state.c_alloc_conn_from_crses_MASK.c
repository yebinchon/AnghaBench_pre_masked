
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct nfsd4_create_session {int flags; } ;
struct nfsd4_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfsd4_conn* FUNC_0 (struct svc_rqst*,int ) ;

__attribute__((used)) static struct nfsd4_conn *FUNC_1(struct svc_rqst *VAR_3, struct nfsd4_create_session *VAR_4)
{
 u32 VAR_5 = VAR_1;

 if (VAR_4->flags & VAR_2)
  VAR_5 |= VAR_0;
 return FUNC_0(VAR_3, VAR_5);
}
