
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct octeon_droq {int dummy; } ;
struct octeon_device {struct octeon_droq** droq; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct cavium_wk {int ctxul; scalar_t__ ctxptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct lio*,int ) ;
 scalar_t__ FUNC_1 (struct octeon_droq*) ;
 int FUNC_2 (struct octeon_device*,struct octeon_droq*) ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_1)
{
 struct cavium_wk *VAR_2 = (struct cavium_wk *)VAR_1;
 struct lio *VAR_3 = (struct lio *)VAR_2->ctxptr;
 struct octeon_device *VAR_4 = VAR_3->oct_dev;
 int VAR_5 = VAR_2->ctxul;
 struct octeon_droq *VAR_6 = VAR_4->droq[VAR_5];

 if (!FUNC_0(VAR_3, VAR_0) || !VAR_6)
  return;

 if (FUNC_1(VAR_6))
  FUNC_2(VAR_4, VAR_6);
}
