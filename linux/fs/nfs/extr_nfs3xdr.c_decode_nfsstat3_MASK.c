
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef enum nfs_stat { ____Placeholder_nfs_stat } nfs_stat ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xdr_stream*,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__* FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_2, enum nfs_stat *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_4(VAR_2, 4);
 if (FUNC_3(!VAR_4))
  return -VAR_0;
 if (FUNC_3(*VAR_4 != FUNC_1(VAR_1)))
  goto out_status;
 *VAR_3 = 0;
 return 0;
out_status:
 *VAR_3 = FUNC_0(VAR_4);
 FUNC_2(VAR_2, (int)*VAR_3);
 return 0;
}
