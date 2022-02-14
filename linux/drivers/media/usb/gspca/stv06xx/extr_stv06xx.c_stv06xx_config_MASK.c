
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct usb_device_id {int driver_info; } ;
struct sd {TYPE_1__* sensor; int bridge; } ;
struct gspca_dev {int * sd_desc; } ;
struct TYPE_6__ {int (* probe ) (struct sd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*) ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (struct sd*) ;
 int FUNC_6 (struct sd*) ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static int FUNC_7(struct gspca_dev *VAR_9,
     const struct usb_device_id *VAR_10)
{
 struct sd *VAR_11 = (struct sd *) VAR_9;

 FUNC_0(VAR_9, VAR_0, "Configuring camera\n");

 VAR_11->bridge = VAR_10->driver_info;
 VAR_9->sd_desc = &VAR_3;

 if (VAR_2)
  FUNC_6(VAR_11);

 VAR_11->sensor = &VAR_7;
 if (!VAR_11->sensor->probe(VAR_11))
  return 0;

 VAR_11->sensor = &VAR_8;
 if (!VAR_11->sensor->probe(VAR_11))
  return 0;

 VAR_11->sensor = &VAR_5;
 if (!VAR_11->sensor->probe(VAR_11))
  return 0;

 VAR_11->sensor = &VAR_4;
 if (!VAR_11->sensor->probe(VAR_11))
  return 0;

 VAR_11->sensor = &VAR_6;
 if (!VAR_11->sensor->probe(VAR_11))
  return 0;

 VAR_11->sensor = ((void*)0);
 return -VAR_1;
}
