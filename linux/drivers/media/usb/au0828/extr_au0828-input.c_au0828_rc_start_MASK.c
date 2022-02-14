
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct au0828_rc* priv; } ;
struct au0828_rc {int polling; int work; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct au0828_rc*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct rc_dev *VAR_1)
{
 struct au0828_rc *VAR_2 = VAR_1->priv;

 FUNC_0(&VAR_2->work, VAR_0);


 FUNC_1(VAR_2, 0xe0, 1 << 4);

 FUNC_3(&VAR_2->work, FUNC_2(VAR_2->polling));

 return 0;
}
