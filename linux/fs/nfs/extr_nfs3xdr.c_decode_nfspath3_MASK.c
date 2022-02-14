
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xdr_stream {TYPE_1__* buf; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ page_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;
 scalar_t__ FUNC_4 (struct xdr_stream*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct xdr_stream *VAR_3)
{
 u32 VAR_4, VAR_5;
 __be32 *VAR_6;

 VAR_6 = FUNC_3(VAR_3, 4);
 if (FUNC_2(!VAR_6))
  return -VAR_0;
 VAR_5 = FUNC_0(VAR_6);
 if (FUNC_2(VAR_5 >= VAR_3->buf->page_len || VAR_5 > VAR_2))
  goto out_nametoolong;
 VAR_4 = FUNC_4(VAR_3, VAR_5);
 if (FUNC_2(VAR_5 > VAR_4))
  goto out_cheating;
 FUNC_5(VAR_3->buf, VAR_5);
 return 0;

out_nametoolong:
 FUNC_1("NFS: returned pathname too long: %u\n", VAR_5);
 return -VAR_1;
out_cheating:
 FUNC_1("NFS: server cheating in pathname result: "
  "count %u > recvd %u\n", VAR_5, VAR_4);
 return -VAR_0;
}
