
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
struct nfs4_change_info {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,struct nfs4_change_info*) ;
 int FUNC_2 (struct xdr_stream*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_6(struct xdr_stream *VAR_2, struct nfs4_change_info *VAR_3)
{
 __be32 *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (VAR_6)
  return VAR_6;
 if ((VAR_6 = FUNC_1(VAR_2, VAR_3)))
  return VAR_6;
 VAR_4 = FUNC_5(VAR_2, 4);
 if (FUNC_4(!VAR_4))
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_4);
 VAR_4 = FUNC_5(VAR_2, VAR_5 << 2);
 if (FUNC_3(VAR_4))
  return 0;
 return -VAR_0;
}
