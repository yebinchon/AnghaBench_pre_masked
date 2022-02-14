
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
typedef void* int32_t ;
typedef enum nfs_opnum4 { ____Placeholder_nfs_opnum4 } nfs_opnum4 ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct xdr_stream*,int,void*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__* FUNC_6 (struct xdr_stream*,int) ;

__attribute__((used)) static bool FUNC_7(struct xdr_stream *VAR_3, enum nfs_opnum4 VAR_4,
  int *VAR_5)
{
 __be32 *VAR_6;
 uint32_t VAR_7;
 int32_t VAR_8;

 VAR_6 = FUNC_6(VAR_3, 8);
 if (FUNC_5(!VAR_6))
  goto out_overflow;
 VAR_7 = FUNC_0(VAR_6++);
 if (FUNC_5(VAR_7 != VAR_4))
  goto out_bad_operation;
 if (FUNC_5(*VAR_6 != FUNC_1(VAR_2)))
  goto out_status;
 *VAR_5 = 0;
 return 1;
out_status:
 VAR_8 = FUNC_0(VAR_6);
 FUNC_4(VAR_3, VAR_7, VAR_8);
 *VAR_5 = FUNC_3(VAR_8);
 return 1;
out_bad_operation:
 FUNC_2("nfs: Server returned operation"
  " %d but we issued a request for %d\n",
   VAR_7, VAR_4);
 *VAR_5 = -VAR_1;
 return 0;
out_overflow:
 *VAR_5 = -VAR_0;
 return 0;
}
