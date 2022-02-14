
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imgu_device {int dummy; } ;
struct imgu_css {int * fw; int * binary; TYPE_2__* fwp; int dev; } ;
struct TYPE_3__ {unsigned int binary_nr; } ;
struct TYPE_4__ {TYPE_1__ file_header; } ;


 struct imgu_device* FUNC_0 (int ) ;
 int FUNC_1 (struct imgu_device*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct imgu_css *VAR_0)
{
 struct imgu_device *VAR_1 = FUNC_0(VAR_0->dev);

 if (VAR_0->binary) {
  unsigned int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->fwp->file_header.binary_nr; VAR_2++)
   FUNC_1(VAR_1, &VAR_0->binary[VAR_2]);
  FUNC_2(VAR_0->binary);
 }
 if (VAR_0->fw)
  FUNC_3(VAR_0->fw);

 VAR_0->binary = ((void*)0);
 VAR_0->fw = ((void*)0);
}
