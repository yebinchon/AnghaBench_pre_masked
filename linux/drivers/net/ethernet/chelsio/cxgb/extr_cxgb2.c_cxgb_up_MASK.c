
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int has_msi; } ;
struct adapter {int flags; int sge; TYPE_2__* pdev; TYPE_1__ params; int name; } ;
struct TYPE_5__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int ,struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int VAR_3 ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct adapter *VAR_4)
{
 int VAR_5 = 0;

 if (!(VAR_4->flags & VAR_0)) {
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5)
   goto out_err;

  FUNC_0(VAR_4);
  VAR_4->flags |= VAR_0;
 }

 FUNC_5(VAR_4);

 VAR_4->params.has_msi = !VAR_2 && !FUNC_2(VAR_4->pdev);
 VAR_5 = FUNC_3(VAR_4->pdev->irq, VAR_3,
     VAR_4->params.has_msi ? 0 : VAR_1,
     VAR_4->name, VAR_4);
 if (VAR_5) {
  if (VAR_4->params.has_msi)
   FUNC_1(VAR_4->pdev);

  goto out_err;
 }

 FUNC_7(VAR_4->sge);
 FUNC_6(VAR_4);
out_err:
 return VAR_5;
}
