
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_capability {scalar_t__ bus_info; scalar_t__ card; scalar_t__ driver; } ;
struct gspca_dev {TYPE_3__* dev; TYPE_1__* sd_desc; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int idProduct; int idVendor; } ;
struct TYPE_6__ {TYPE_2__ descriptor; int * product; } ;
struct TYPE_4__ {int * name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int,int) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 struct gspca_dev* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct gspca_dev *VAR_3 = FUNC_4(VAR_0);

 FUNC_2((char *)VAR_2->driver, VAR_3->sd_desc->name,
  sizeof(VAR_2->driver));
 if (VAR_3->dev->product != ((void*)0)) {
  FUNC_2((char *)VAR_2->card, VAR_3->dev->product,
   sizeof(VAR_2->card));
 } else {
  FUNC_1((char *) VAR_2->card, sizeof VAR_2->card,
   "USB Camera (%04x:%04x)",
   FUNC_0(VAR_3->dev->descriptor.idVendor),
   FUNC_0(VAR_3->dev->descriptor.idProduct));
 }
 FUNC_3(VAR_3->dev, (char *) VAR_2->bus_info,
   sizeof(VAR_2->bus_info));
 return 0;
}
