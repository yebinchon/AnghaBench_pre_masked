
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {size_t transfer_buffer_length; } ;
struct TYPE_3__ {size_t size; } ;
struct dlfb_data {TYPE_2__* udev; int lost_pixels; TYPE_1__ urbs; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_5(struct dlfb_data *VAR_1, struct urb *VAR_2, size_t VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3 > VAR_1->urbs.size);

 VAR_2->transfer_buffer_length = VAR_3;
 VAR_4 = FUNC_4(VAR_2, VAR_0);
 if (VAR_4) {
  FUNC_3(VAR_2);
  FUNC_1(&VAR_1->lost_pixels, 1);
  FUNC_2(&VAR_1->udev->dev, "submit urb error: %d\n", VAR_4);
 }
 return VAR_4;
}
