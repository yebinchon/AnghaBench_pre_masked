
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_6__ {char* name; int mode; } ;
struct TYPE_8__ {int show; TYPE_1__ attr; } ;
struct TYPE_7__ {int* cap; TYPE_5__ devattr; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (char*,int,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,int*,int*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4->cap); VAR_8++) {
  VAR_11 = VAR_8 + 0x20;
  VAR_9 = FUNC_5(VAR_5, "SN00", &VAR_11,
     &VAR_10);
  if (!VAR_9) {
   FUNC_2("caching handle 0x%.4x (offset: 0x%.2x)\n",
     VAR_10, VAR_8);
   VAR_4->cap[VAR_8] = VAR_10;
  }
 }

 if (VAR_3) {
  FUNC_6(&VAR_4->devattr.attr);
  VAR_4->devattr.attr.name = "handles";
  VAR_4->devattr.attr.mode = VAR_2;
  VAR_4->devattr.show = VAR_6;


  if (FUNC_1(&VAR_7->dev, &VAR_4->devattr)) {
   FUNC_3(VAR_4);
   VAR_4 = ((void*)0);
   return -1;
  }
 }

 return 0;
}
