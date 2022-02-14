
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef enum nfs_cb_opnum4 { ____Placeholder_nfs_cb_opnum4 } nfs_cb_opnum4 ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int * FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_0, enum nfs_cb_opnum4 VAR_1)
{
 __be32 *VAR_2;

 VAR_2 = FUNC_1(VAR_0, 4);
 *VAR_2 = FUNC_0(VAR_1);
}
