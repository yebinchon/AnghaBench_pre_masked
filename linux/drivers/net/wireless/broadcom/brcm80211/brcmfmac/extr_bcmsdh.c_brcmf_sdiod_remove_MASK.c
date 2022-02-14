
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct brcmf_sdio_dev {TYPE_3__* func1; scalar_t__ sbwad; int sgtable; TYPE_3__* func2; int * bus; int state; } ;
struct TYPE_8__ {TYPE_2__* card; } ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct brcmf_sdio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct brcmf_sdio_dev *VAR_1)
{
 VAR_1->state = VAR_0;
 if (VAR_1->bus) {
  FUNC_0(VAR_1->bus);
  VAR_1->bus = ((void*)0);
 }

 FUNC_1(VAR_1);


 FUNC_3(VAR_1->func2);
 FUNC_4(VAR_1->func2);
 FUNC_5(VAR_1->func2);


 FUNC_3(VAR_1->func1);
 FUNC_4(VAR_1->func1);
 FUNC_5(VAR_1->func1);

 FUNC_6(&VAR_1->sgtable);
 VAR_1->sbwad = 0;

 FUNC_2(VAR_1->func1->card->host->parent);
 return 0;
}
