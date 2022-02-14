
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5523 {int dummy; } ;


 int FUNC_0 (struct ar5523*,char*,int) ;
 int FUNC_1 (struct ar5523*) ;
 int FUNC_2 (struct ar5523*) ;
 int FUNC_3 (struct ar5523*) ;

__attribute__((used)) static int FUNC_4(struct ar5523 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0, "could not set chan, error %d\n", VAR_1);
  goto out_err;
 }


 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0, "could not reset Tx queues, error %d\n",
      VAR_1);
  goto out_err;
 }

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0, "could not init wme, error %d\n", VAR_1);

out_err:
 return VAR_1;
}
