
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nlm_res {scalar_t__ status; } ;


 int FUNC_0 (struct xdr_stream*,struct nlm_res const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct xdr_stream *VAR_1,
    const struct nlm_res *VAR_2)
{
 if (VAR_2->status == VAR_0)
  FUNC_0(VAR_1, VAR_2);
}
