
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dax_ctx {scalar_t__ ca_buf_ra; TYPE_1__* ca_buf; } ;
struct dax_cca {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dax_ctx *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 u16 VAR_7;

 FUNC_1("idx=%d", VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_3->ca_buf[VAR_4].status == VAR_0)
   FUNC_2(VAR_2);
  else
   return;
 }
 FUNC_1("ctx (%p): CCB[%d] timed out, wait usec=%d, retries=%d. Killing ccb",
  (void *)VAR_3, VAR_4, VAR_2, VAR_1);

 VAR_5 = FUNC_0(VAR_3->ca_buf_ra + VAR_4 * sizeof(struct dax_cca),
      &VAR_7);
 FUNC_1("Kill CCB[%d] %s", VAR_4, VAR_5 ? "failed" : "succeeded");
}
