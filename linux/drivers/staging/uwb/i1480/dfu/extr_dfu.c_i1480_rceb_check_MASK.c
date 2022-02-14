
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct uwb_rceb {unsigned int bEventContext; unsigned int bEventType; int wEvent; } ;
struct i1480 {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char const*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

int FUNC_2(const struct i1480 *VAR_1, const struct uwb_rceb *VAR_2,
       const char *VAR_3, u8 VAR_4, u8 VAR_5,
       unsigned VAR_6)
{
 int VAR_7 = 0;
 struct device *VAR_8 = VAR_1->dev;
 if (VAR_2->bEventContext != VAR_4) {
  if (VAR_3)
   FUNC_0(VAR_8, "%s: unexpected context id 0x%02x "
    "(expected 0x%02x)\n", VAR_3,
    VAR_2->bEventContext, VAR_4);
  VAR_7 = -VAR_0;
 }
 if (VAR_2->bEventType != VAR_5) {
  if (VAR_3)
   FUNC_0(VAR_8, "%s: unexpected event type 0x%02x "
    "(expected 0x%02x)\n", VAR_3,
    VAR_2->bEventType, VAR_5);
  VAR_7 = -VAR_0;
 }
 if (FUNC_1(VAR_2->wEvent) != VAR_6) {
  if (VAR_3)
   FUNC_0(VAR_8, "%s: unexpected event 0x%04x "
    "(expected 0x%04x)\n", VAR_3,
    FUNC_1(VAR_2->wEvent), VAR_6);
  VAR_7 = -VAR_0;
 }
 return VAR_7;
}
