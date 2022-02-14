
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_setaclargs {int acl_len; int acl_pages; } ;
struct compound_hdr {int dummy; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 void** FUNC_3 (struct xdr_stream*,int) ;
 int FUNC_4 (struct xdr_stream*,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct xdr_stream *VAR_4, const struct nfs_setaclargs *VAR_5,
  struct compound_hdr *VAR_6)
{
 __be32 *VAR_7;

 FUNC_2(VAR_4, VAR_1, VAR_2, VAR_6);
 FUNC_1(VAR_4, &VAR_3);
 VAR_7 = FUNC_3(VAR_4, 2*4);
 *VAR_7++ = FUNC_0(1);
 *VAR_7 = FUNC_0(VAR_0);
 VAR_7 = FUNC_3(VAR_4, 4);
 *VAR_7 = FUNC_0(VAR_5->acl_len);
 FUNC_4(VAR_4, VAR_5->acl_pages, 0, VAR_5->acl_len);
}
