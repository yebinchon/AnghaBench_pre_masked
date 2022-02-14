
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int * parent; int release; } ;
struct TYPE_6__ {char* name; int mode; } ;
struct bin_attribute {int size; int read; TYPE_3__ attr; } ;
struct solo_dev {scalar_t__ type; int sdram_size; int nr_chans; TYPE_2__* vfd; TYPE_1__* pdev; struct device dev; struct bin_attribute sdram_attr; } ;
struct TYPE_5__ {int num; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct device*,char*,char const*,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct device*,struct bin_attribute*) ;
 scalar_t__ FUNC_4 (struct device*,int *) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int VAR_2 ;
 int FUNC_7 (struct device*,int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(struct solo_dev *VAR_5)
{
 struct bin_attribute *VAR_6 = &VAR_5->sdram_attr;
 struct device *VAR_7 = &VAR_5->dev;
 const char *VAR_8;
 int VAR_9;

 if (VAR_5->type == VAR_1)
  VAR_8 = "solo6110";
 else
  VAR_8 = "solo6010";

 VAR_7->release = VAR_4;
 VAR_7->parent = &VAR_5->pdev->dev;
 FUNC_7(VAR_7, FUNC_2(&VAR_5->pdev->dev));
 FUNC_1(VAR_7, "%s-%d-%d", VAR_8, VAR_5->vfd->num,
       VAR_5->nr_chans);

 if (FUNC_5(VAR_7)) {
  VAR_7->parent = ((void*)0);
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
  if (FUNC_4(VAR_7, &VAR_3[VAR_9])) {
   FUNC_6(VAR_7);
   return -VAR_0;
  }
 }

 FUNC_8(&VAR_6->attr);
 VAR_6->attr.name = "sdram";
 VAR_6->attr.mode = 0440;
 VAR_6->read = VAR_2;
 VAR_6->size = VAR_5->sdram_size;

 if (FUNC_3(VAR_7, VAR_6)) {
  FUNC_6(VAR_7);
  return -VAR_0;
 }

 return 0;
}
