
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; struct tty_driver* driver; } ;
struct tty_driver {int name_base; char* driver_name; char* name; } ;
struct pps_source_info {int mode; int path; int name; int * dev; int owner; } ;
struct pps_device {int dev; struct tty_struct* lookup_cookie; } ;


 scalar_t__ FUNC_0 (struct pps_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pps_device*) ;
 int VAR_6 ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int ,char*,int ) ;
 struct pps_device* FUNC_4 (struct pps_source_info*,int) ;
 int FUNC_5 (struct pps_device*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_7)
{
 struct pps_source_info VAR_8;
 struct tty_driver *VAR_9 = VAR_7->driver;
 int VAR_10 = VAR_7->index + VAR_9->name_base;
 struct pps_device *VAR_11;
 int VAR_12;

 VAR_8.owner = VAR_6;
 VAR_8.dev = ((void*)0);
 FUNC_7(VAR_8.name, VAR_2, "%s%d", VAR_9->driver_name, VAR_10);
 FUNC_7(VAR_8.path, VAR_2, "/dev/%s%d", VAR_9->name, VAR_10);
 VAR_8.mode = VAR_1 | VAR_3 | VAR_4 | VAR_0 | VAR_5;



 VAR_11 = FUNC_4(&VAR_8, VAR_1 | VAR_3 | VAR_4);

 if (FUNC_0(VAR_11)) {
  FUNC_6("cannot register PPS source \"%s\"\n", VAR_8.path);
  return FUNC_1(VAR_11);
 }
 VAR_11->lookup_cookie = VAR_7;


 VAR_12 = FUNC_2(VAR_7);
 if (VAR_12 < 0) {
  FUNC_6("cannot open tty ldisc \"%s\"\n", VAR_8.path);
  goto err_unregister;
 }

 FUNC_3(VAR_11->dev, "source \"%s\" added\n", VAR_8.path);

 return 0;

err_unregister:
 FUNC_5(VAR_11);
 return VAR_12;
}
