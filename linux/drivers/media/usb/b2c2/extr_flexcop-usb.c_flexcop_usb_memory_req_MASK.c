
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct flexcop_usb {int dummy; } ;
typedef int flexcop_usb_request_t ;
typedef scalar_t__ flexcop_usb_mem_page_t ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct flexcop_usb*,int,scalar_t__,int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct flexcop_usb *VAR_7,
  flexcop_usb_request_t VAR_8, flexcop_usb_mem_page_t VAR_9,
  u32 VAR_10, int VAR_11, u8 *VAR_12, u32 VAR_13)
{
 int VAR_14,VAR_15 = 0;
 u16 VAR_16;
 u32 VAR_17 = 0;

 switch(VAR_8) {
 case 129:
  VAR_16 = VAR_2;
  break;
 case 128:
  VAR_16 = VAR_3;
  break;
 case 130:
  VAR_16 = VAR_1;
  break;
 default:
  return -VAR_0;
  break;
 }
 for (VAR_14 = 0; VAR_14 < VAR_13;) {
  VAR_17 =
   VAR_16 < FUNC_0(VAR_10, VAR_13) ?
    VAR_16 :
    FUNC_0(VAR_10, VAR_13);
  FUNC_1("%x\n",
   (VAR_10 & VAR_5) |
    (VAR_4*VAR_11));

  VAR_15 = FUNC_2(VAR_7, VAR_8,
   VAR_9 + (VAR_10 / VAR_6),
   (VAR_10 & VAR_5) |
    (VAR_4*VAR_11),
   &VAR_12[VAR_14], VAR_17);

  if (VAR_15 < 0)
   return VAR_15;
  VAR_10 += VAR_17;
  VAR_13 -= VAR_17;
 }
 return 0;
}
