
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs4_string {scalar_t__ len; int data; } ;
typedef scalar_t__ ssize_t ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xdr_stream*,int *,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct xdr_stream *VAR_1,
  struct nfs4_string *VAR_2, gfp_t VAR_3)
{
 ssize_t VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_2->data,
   VAR_0, VAR_3);
 VAR_2->len = 0;
 if (VAR_4 > 0)
  VAR_2->len = VAR_4;
 return VAR_4;
}
