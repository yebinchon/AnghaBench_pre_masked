
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct usb_configuration {int dummy; } ;


 scalar_t__ FUNC_0 (struct usb_function*) ;
 int FUNC_1 (struct usb_function*) ;
 int FUNC_2 (struct usb_function*) ;
 struct usb_function* VAR_0 ;
 struct usb_function* VAR_1 ;
 struct usb_function* VAR_2 ;
 struct usb_function* VAR_3 ;
 struct usb_function* VAR_4 ;
 struct usb_function* VAR_5 ;
 struct usb_function* VAR_6 ;
 struct usb_function* VAR_7 ;
 struct usb_function* VAR_8 ;
 struct usb_function* VAR_9 ;
 struct usb_function* VAR_10 ;
 struct usb_function* VAR_11 ;
 struct usb_function* VAR_12 ;
 struct usb_function* VAR_13 ;
 struct usb_function* VAR_14 ;
 struct usb_function* VAR_15 ;
 struct usb_function* VAR_16 ;
 struct usb_function* VAR_17 ;
 struct usb_configuration VAR_18 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct usb_configuration*,struct usb_function*) ;
 struct usb_function* FUNC_5 (struct usb_function*) ;
 int FUNC_6 (struct usb_function*) ;
 int FUNC_7 (struct usb_configuration*,struct usb_function*) ;

__attribute__((used)) static int FUNC_8(struct usb_configuration *VAR_19)
{
 struct usb_function *VAR_20;
 struct usb_function *VAR_21 = ((void*)0);
 struct usb_function *VAR_22 = ((void*)0);
 struct usb_function *VAR_23;
 struct usb_function *VAR_24 = ((void*)0);
 struct usb_function *VAR_25;
 int VAR_26 = 0;
 int VAR_27 = -1;
 int VAR_28 = -1;
 int VAR_29 = -1;

 if (!FUNC_0(VAR_17)) {
  VAR_21 = FUNC_5(VAR_17);
  if (FUNC_0(VAR_21))
   FUNC_3("could not get phonet function\n");
 }

 if (!FUNC_0(VAR_15)) {
  VAR_22 = FUNC_5(VAR_15);
  if (FUNC_0(VAR_22))
   FUNC_3("could not get obex function 0\n");
 }

 if (!FUNC_0(VAR_16)) {
  VAR_24 = FUNC_5(VAR_16);
  if (FUNC_0(VAR_24))
   FUNC_3("could not get obex function 1\n");
 }

 VAR_20 = FUNC_5(VAR_12);
 if (FUNC_0(VAR_20)) {
  VAR_26 = FUNC_2(VAR_20);
  goto err_get_acm;
 }

 VAR_23 = FUNC_5(VAR_13);
 if (FUNC_0(VAR_23)) {
  VAR_26 = FUNC_2(VAR_23);
  goto err_get_ecm;
 }

 VAR_25 = FUNC_5(VAR_14);
 if (FUNC_0(VAR_25)) {
  VAR_26 = FUNC_2(VAR_25);
  goto err_get_msg;
 }

 if (!FUNC_1(VAR_21)) {
  VAR_29 = FUNC_4(VAR_19, VAR_21);
  if (VAR_29)
   FUNC_3("could not add phonet function\n");
 }

 if (!FUNC_1(VAR_22)) {
  VAR_27 = FUNC_4(VAR_19, VAR_22);
  if (VAR_27)
   FUNC_3("could not add obex function 0\n");
 }

 if (!FUNC_1(VAR_24)) {
  VAR_28 = FUNC_4(VAR_19, VAR_24);
  if (VAR_28)
   FUNC_3("could not add obex function 1\n");
 }

 VAR_26 = FUNC_4(VAR_19, VAR_20);
 if (VAR_26)
  goto err_conf;

 VAR_26 = FUNC_4(VAR_19, VAR_23);
 if (VAR_26) {
  FUNC_3("could not bind ecm config %d\n", VAR_26);
  goto err_ecm;
 }

 VAR_26 = FUNC_4(VAR_19, VAR_25);
 if (VAR_26)
  goto err_msg;

 if (VAR_19 == &VAR_18) {
  VAR_0 = VAR_20;
  VAR_2 = VAR_23;
  VAR_10 = VAR_21;
  VAR_6 = VAR_22;
  VAR_8 = VAR_24;
  VAR_4 = VAR_25;
 } else {
  VAR_1 = VAR_20;
  VAR_3 = VAR_23;
  VAR_11 = VAR_21;
  VAR_7 = VAR_22;
  VAR_9 = VAR_24;
  VAR_5 = VAR_25;
 }

 return VAR_26;
err_msg:
 FUNC_7(VAR_19, VAR_23);
err_ecm:
 FUNC_7(VAR_19, VAR_20);
err_conf:
 if (!VAR_28)
  FUNC_7(VAR_19, VAR_24);
 if (!VAR_27)
  FUNC_7(VAR_19, VAR_22);
 if (!VAR_29)
  FUNC_7(VAR_19, VAR_21);
 FUNC_6(VAR_25);
err_get_msg:
 FUNC_6(VAR_23);
err_get_ecm:
 FUNC_6(VAR_20);
err_get_acm:
 if (!FUNC_1(VAR_24))
  FUNC_6(VAR_24);
 if (!FUNC_1(VAR_22))
  FUNC_6(VAR_22);
 if (!FUNC_1(VAR_21))
  FUNC_6(VAR_21);
 return VAR_26;
}
