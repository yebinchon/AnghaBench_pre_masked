
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pch_can_priv {TYPE_2__* regs; } ;
typedef enum pch_ifreg { ____Placeholder_pch_ifreg } pch_ifreg ;
struct TYPE_4__ {TYPE_1__* ifregs; } ;
struct TYPE_3__ {int creq; int id2; int mcont; int cmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct pch_can_priv *VAR_7, u32 VAR_8,
        int VAR_9, enum pch_ifreg VAR_10)
{
 u32 VAR_11;

 if (VAR_10)
  VAR_11 = VAR_6;
 else
  VAR_11 = VAR_5;


 FUNC_0(VAR_3, &VAR_7->regs->ifregs[VAR_10].cmask);
 FUNC_3(&VAR_7->regs->ifregs[VAR_10].creq, VAR_8);


 FUNC_0(VAR_2 | VAR_0 | VAR_1,
    &VAR_7->regs->ifregs[VAR_10].cmask);

 if (VAR_9) {

  FUNC_2(&VAR_7->regs->ifregs[VAR_10].mcont, VAR_11);
  FUNC_2(&VAR_7->regs->ifregs[VAR_10].id2, VAR_4);
 } else {

  FUNC_1(&VAR_7->regs->ifregs[VAR_10].mcont, VAR_11);
  FUNC_1(&VAR_7->regs->ifregs[VAR_10].id2, VAR_4);
 }

 FUNC_3(&VAR_7->regs->ifregs[VAR_10].creq, VAR_8);
}
