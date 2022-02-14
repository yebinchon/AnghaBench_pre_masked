
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int driver_lock; int fw_waitq; int (* fw_callback ) (struct lbs_private*,int,struct firmware const*,struct firmware const*) ;} ;
struct firmware {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct lbs_private*,int,struct firmware const*,struct firmware const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct lbs_private *VAR_0, int VAR_1,
 const struct firmware *VAR_2, const struct firmware *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0("firmware load complete, code %d\n", VAR_1);


 VAR_0->fw_callback(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_1(&VAR_0->driver_lock, VAR_4);
 VAR_0->fw_callback = ((void*)0);
 FUNC_4(&VAR_0->fw_waitq);
 FUNC_2(&VAR_0->driver_lock, VAR_4);
}
