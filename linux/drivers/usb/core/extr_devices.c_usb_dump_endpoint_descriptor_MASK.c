
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {unsigned int bInterval; int bmAttributes; int bEndpointAddress; } ;






 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char*,int ,char,int ,char*,unsigned int,unsigned int,char) ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor const*) ;
 unsigned int FUNC_2 (struct usb_endpoint_descriptor const*) ;
 unsigned int FUNC_3 (struct usb_endpoint_descriptor const*) ;
 int FUNC_4 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static char *FUNC_5(int VAR_3, char *VAR_4, char *VAR_5,
    const struct usb_endpoint_descriptor *VAR_6)
{
 char VAR_7, VAR_8, *VAR_9;
 unsigned VAR_10, VAR_11 = 1;

 if (VAR_4 > VAR_5)
  return VAR_4;

 VAR_7 = FUNC_1(VAR_6) ? 'I' : 'O';

 if (VAR_3 == VAR_0)
  VAR_11 = FUNC_3(VAR_6);


 switch (FUNC_4(VAR_6)) {
 case 130:
  VAR_9 = "Ctrl";
  if (VAR_3 == VAR_0)
   VAR_10 = VAR_6->bInterval;
  else
   VAR_10 = 0;
  VAR_7 = 'B';
  break;
 case 128:
  VAR_9 = "Isoc";
  VAR_10 = 1 << (VAR_6->bInterval - 1);
  break;
 case 131:
  VAR_9 = "Bulk";
  if (VAR_3 == VAR_0 && VAR_7 == 'O')
   VAR_10 = VAR_6->bInterval;
  else
   VAR_10 = 0;
  break;
 case 129:
  VAR_9 = "Int.";
  if (VAR_3 == VAR_0 || VAR_3 >= VAR_1)
   VAR_10 = 1 << (VAR_6->bInterval - 1);
  else
   VAR_10 = VAR_6->bInterval;
  break;
 default:
  return VAR_4;
 }
 VAR_10 *= (VAR_3 == VAR_0 ||
       VAR_3 >= VAR_1) ? 125 : 1000;
 if (VAR_10 % 1000)
  VAR_8 = 'u';
 else {
  VAR_8 = 'm';
  VAR_10 /= 1000;
 }

 VAR_4 += FUNC_0(VAR_4, VAR_2, VAR_6->bEndpointAddress, VAR_7,
    VAR_6->bmAttributes, VAR_9,
    FUNC_2(VAR_6) *
    VAR_11,
    VAR_10, VAR_8);
 return VAR_4;
}
