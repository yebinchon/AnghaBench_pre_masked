
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {int dev_quirks; } ;
struct TYPE_2__ {scalar_t__ wmanufacturerid; int model; } ;
struct ufs_dev_fix {int quirk; TYPE_1__ card; } ;
struct ufs_dev_desc {scalar_t__ wmanufacturerid; scalar_t__ model; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 struct ufs_dev_fix* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct ufs_hba *VAR_3,
       struct ufs_dev_desc *VAR_4)
{
 struct ufs_dev_fix *VAR_5;

 for (VAR_5 = VAR_2; VAR_5->quirk; VAR_5++) {
  if ((VAR_5->card.wmanufacturerid == VAR_4->wmanufacturerid ||
       VAR_5->card.wmanufacturerid == VAR_1) &&
       ((VAR_4->model &&
         FUNC_0(VAR_5->card.model, VAR_4->model)) ||
        !FUNC_1(VAR_5->card.model, VAR_0)))
   VAR_3->dev_quirks |= VAR_5->quirk;
 }
}
