
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nlm_res {scalar_t__ status; } ;


 int FUNC_0 (struct xdr_stream*,struct nlm_res*) ;
 int FUNC_1 (struct xdr_stream*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_1,
    struct nlm_res *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2->status);
 if (FUNC_2(VAR_3))
  goto out;
 if (VAR_2->status == VAR_0)
  VAR_3 = FUNC_0(VAR_1, VAR_2);
out:
 return VAR_3;
}
