
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 int FUNC_0 (char) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 scalar_t__ FUNC_1 (int ) ;
 char* VAR_21 ;
 scalar_t__ FUNC_2 (char*,char**,int) ;

void FUNC_3(struct usb_device *VAR_22, unsigned long *VAR_23)
{
 char *VAR_24;
 u16 VAR_25 = FUNC_1(VAR_22->descriptor.idVendor);
 u16 VAR_26 = FUNC_1(VAR_22->descriptor.idProduct);
 unsigned VAR_27 = 0;
 unsigned int VAR_28 = (VAR_18 | VAR_1 |
   VAR_4 | VAR_7 |
   VAR_2 | VAR_5 |
   VAR_11 | VAR_10 |
   VAR_3 | VAR_6 |
   VAR_19 | VAR_17 |
   VAR_14 | VAR_13 |
   VAR_8 | VAR_20 |
   VAR_12 | VAR_16 |
   VAR_9 | VAR_15 |
   VAR_0);

 VAR_24 = VAR_21;
 while (*VAR_24) {

  if (VAR_25 == FUNC_2(VAR_24, &VAR_24, 16) &&
    *VAR_24 == ':' &&
    VAR_26 == FUNC_2(VAR_24+1, &VAR_24, 16) &&
    *VAR_24 == ':')
   break;


  while (*VAR_24) {
   if (*VAR_24++ == ',')
    break;
  }
 }
 if (!*VAR_24)
  return;


 while (*++VAR_24 && *VAR_24 != ',') {
  switch (FUNC_0(*VAR_24)) {
  case 'a':
   VAR_27 |= VAR_18;
   break;
  case 'b':
   VAR_27 |= VAR_1;
   break;
  case 'c':
   VAR_27 |= VAR_4;
   break;
  case 'd':
   VAR_27 |= VAR_14;
   break;
  case 'e':
   VAR_27 |= VAR_13;
   break;
  case 'f':
   VAR_27 |= VAR_16;
   break;
  case 'g':
   VAR_27 |= VAR_9;
   break;
  case 'h':
   VAR_27 |= VAR_2;
   break;
  case 'i':
   VAR_27 |= VAR_5;
   break;
  case 'j':
   VAR_27 |= VAR_15;
   break;
  case 'l':
   VAR_27 |= VAR_11;
   break;
  case 'm':
   VAR_27 |= VAR_10;
   break;
  case 'n':
   VAR_27 |= VAR_8;
   break;
  case 'o':
   VAR_27 |= VAR_3;
   break;
  case 'p':
   VAR_27 |= VAR_20;
   break;
  case 'r':
   VAR_27 |= VAR_6;
   break;
  case 's':
   VAR_27 |= VAR_19;
   break;
  case 't':
   VAR_27 |= VAR_12;
   break;
  case 'u':
   VAR_27 |= VAR_7;
   break;
  case 'w':
   VAR_27 |= VAR_17;
   break;
  case 'y':
   VAR_27 |= VAR_0;
   break;

  }
 }
 *VAR_23 = (*VAR_23 & ~VAR_28) | VAR_27;
}
