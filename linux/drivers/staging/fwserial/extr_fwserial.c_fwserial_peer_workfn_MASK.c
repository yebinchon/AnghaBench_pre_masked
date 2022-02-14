
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct fwtty_peer {int (* workfn ) (struct work_struct*) ;} ;


 int FUNC_0 (struct work_struct*) ;
 struct fwtty_peer* FUNC_1 (struct work_struct*,struct work_struct*) ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_0)
{
 struct fwtty_peer *VAR_1 = FUNC_1(VAR_0, VAR_0);

 VAR_1->workfn(VAR_0);
}
