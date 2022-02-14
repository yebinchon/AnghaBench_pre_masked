
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct firmware {int dummy; } ;
struct as10x_bus_adapter_t {struct usb_device* usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (struct as10x_bus_adapter_t*,unsigned char*,struct firmware const*) ;
 char* VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,int ,char const*) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char const*,int *) ;

int FUNC_8(struct as10x_bus_adapter_t *VAR_10)
{
 int VAR_11 = -VAR_1;
 const struct firmware *VAR_12 = ((void*)0);
 unsigned char *VAR_13 = ((void*)0);
 const char *VAR_14, *VAR_15;
 struct usb_device *VAR_16 = VAR_10->usb_dev;


 if (VAR_9) {
  VAR_14 = VAR_5;
  VAR_15 = VAR_6;
 } else {
  VAR_14 = VAR_7;
  VAR_15 = VAR_8;
 }


 VAR_13 = FUNC_2(VAR_4, VAR_3);
 if (VAR_13 == ((void*)0)) {
  VAR_11 = -VAR_2;
  goto error;
 }


 VAR_11 = FUNC_7(&VAR_12, VAR_14, &VAR_16->dev);
 if (VAR_11 < 0) {
  FUNC_4("%s: unable to locate firmware file: %s\n",
         VAR_0, VAR_14);
  goto error;
 }


 VAR_11 = FUNC_0(VAR_10, VAR_13, VAR_12);
 if (VAR_11 < 0) {
  FUNC_4("%s: error during firmware upload part1\n",
         VAR_0);
  goto error;
 }

 FUNC_5("%s: firmware: %s loaded with success\n",
  VAR_0, VAR_14);
 FUNC_6(VAR_12);
 VAR_12 = ((void*)0);


 FUNC_3(100);


 VAR_11 = FUNC_7(&VAR_12, VAR_15, &VAR_16->dev);
 if (VAR_11 < 0) {
  FUNC_4("%s: unable to locate firmware file: %s\n",
         VAR_0, VAR_15);
  goto error;
 }


 VAR_11 = FUNC_0(VAR_10, VAR_13, VAR_12);
 if (VAR_11 < 0) {
  FUNC_4("%s: error during firmware upload part2\n",
         VAR_0);
  goto error;
 }

 FUNC_5("%s: firmware: %s loaded with success\n",
  VAR_0, VAR_15);
error:
 FUNC_1(VAR_13);
 FUNC_6(VAR_12);

 return VAR_11;
}
