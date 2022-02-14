
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int delegation; int delegation_type; } ;
struct nfs_openargs {int claim; TYPE_1__ u; int name; } ;
struct compound_hdr {int dummy; } ;


 int FUNC_0 () ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xdr_stream*,int ,int *) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int FUNC_3 (struct xdr_stream*) ;
 int FUNC_4 (struct xdr_stream*,int ) ;
 int FUNC_5 (struct xdr_stream*,int ) ;
 int FUNC_6 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_7 (struct xdr_stream*,struct nfs_openargs const*) ;
 int FUNC_8 (struct xdr_stream*,struct nfs_openargs const*) ;

__attribute__((used)) static void FUNC_9(struct xdr_stream *VAR_2, const struct nfs_openargs *VAR_3, struct compound_hdr *VAR_4)
{
 FUNC_6(VAR_2, VAR_0, VAR_1, VAR_4);
 FUNC_7(VAR_2, VAR_3);
 FUNC_8(VAR_2, VAR_3);
 switch (VAR_3->claim) {
 case 129:
  FUNC_4(VAR_2, VAR_3->name);
  break;
 case 128:
  FUNC_5(VAR_2, VAR_3->u.delegation_type);
  break;
 case 132:
  FUNC_1(VAR_2, VAR_3->name, &VAR_3->u.delegation);
  break;
 case 130:
  FUNC_3(VAR_2);
  break;
 case 131:
  FUNC_2(VAR_2, &VAR_3->u.delegation);
  break;
 default:
  FUNC_0();
 }
}
