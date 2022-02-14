
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_openargs {int open_flags; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,struct nfs_openargs const*) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_3, const struct nfs_openargs *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_2(VAR_3, 4);
 switch (VAR_4->open_flags & VAR_2) {
 case 0:
  *VAR_5 = FUNC_0(VAR_1);
  break;
 default:
  *VAR_5 = FUNC_0(VAR_0);
  FUNC_1(VAR_3, VAR_4);
 }
}
