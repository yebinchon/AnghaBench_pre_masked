
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zd_usb {int dummy; } ;
struct usb_device {int dev; } ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;
typedef int fw_name ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct zd_usb*,char*,int,char*) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,int ,int *) ;
 int FUNC_3 (struct usb_device*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 struct usb_device* FUNC_4 (struct zd_usb*) ;

__attribute__((used)) static int FUNC_5(struct zd_usb *VAR_4,
 const struct firmware *VAR_5)
{
 struct usb_device *VAR_6 = FUNC_4(VAR_4);
 const struct firmware *VAR_7 = ((void*)0);
 int VAR_8;
 int VAR_9 = 0;
 char VAR_10[128];

 VAR_9 = FUNC_2(&VAR_7,
  FUNC_0(VAR_4, VAR_10, sizeof(VAR_10), "ur"),
  &VAR_6->dev);
 if (VAR_9)
  goto error;

 VAR_9 = FUNC_3(VAR_6, VAR_7->data, VAR_7->size, VAR_2, VAR_3);
 if (VAR_9)
  goto error;

 VAR_8 = (VAR_0 * sizeof(u16));
 VAR_9 = FUNC_3(VAR_6, VAR_5->data + VAR_8, VAR_5->size - VAR_8,
  VAR_1 + VAR_0, VAR_3);






error:
 FUNC_1(VAR_7);
 return VAR_9;
}
