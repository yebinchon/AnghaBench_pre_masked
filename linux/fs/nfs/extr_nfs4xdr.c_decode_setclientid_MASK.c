
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfs4_setclientid_res {TYPE_1__ confirm; int clientid; } ;
typedef scalar_t__ int32_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (struct xdr_stream*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct xdr_stream *VAR_5, struct nfs4_setclientid_res *VAR_6)
{
 __be32 *VAR_7;
 uint32_t VAR_8;
 int32_t VAR_9;

 VAR_7 = FUNC_6(VAR_5, 8);
 if (FUNC_4(!VAR_7))
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_7++);
 if (VAR_8 != VAR_4) {
  FUNC_1("nfs: decode_setclientid: Server returned operation"
   " %d\n", VAR_8);
  return -VAR_0;
 }
 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 == VAR_3) {
  VAR_7 = FUNC_6(VAR_5, 8 + VAR_1);
  if (FUNC_4(!VAR_7))
   return -VAR_0;
  VAR_7 = FUNC_5(VAR_7, &VAR_6->clientid);
  FUNC_2(VAR_6->confirm.data, VAR_7, VAR_1);
 } else if (VAR_9 == VAR_2) {
  uint32_t VAR_10;


  VAR_7 = FUNC_6(VAR_5, 4);
  if (FUNC_4(!VAR_7))
   return -VAR_0;
  VAR_10 = FUNC_0(VAR_7);
  VAR_7 = FUNC_6(VAR_5, VAR_10);
  if (FUNC_4(!VAR_7))
   return -VAR_0;


  VAR_7 = FUNC_6(VAR_5, 4);
  if (FUNC_4(!VAR_7))
   return -VAR_0;
  VAR_10 = FUNC_0(VAR_7);
  VAR_7 = FUNC_6(VAR_5, VAR_10);
  if (FUNC_4(!VAR_7))
   return -VAR_0;
  return -VAR_2;
 } else
  return FUNC_3(VAR_9);

 return 0;
}
