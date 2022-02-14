
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int name; } ;
struct net2272_ep {scalar_t__ stopped; scalar_t__ is_in; TYPE_2__ ep; int desc; } ;
struct TYPE_3__ {scalar_t__ speed; } ;
struct net2272 {int lock; struct net2272_ep* ep; TYPE_1__ gadget; int chiprev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef unsigned int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 unsigned int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (int) ;
 struct net2272* FUNC_1 (struct device*) ;
 int VAR_36 ;
 int VAR_37 ;
 int * VAR_38 ;
 int FUNC_2 (struct net2272_ep*,int ) ;
 int FUNC_3 (struct net2272*,int ) ;
 unsigned int FUNC_4 (char*,unsigned int,char*,int,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_39, struct device_attribute *VAR_40, char *VAR_41)
{
 struct net2272 *VAR_42;
 char *VAR_43;
 unsigned VAR_44, VAR_45;
 unsigned long VAR_46;
 u8 VAR_47, VAR_48;
 int VAR_49;
 const char *VAR_50;

 VAR_42 = FUNC_1(VAR_39);
 VAR_43 = VAR_41;
 VAR_44 = VAR_30;
 FUNC_5(&VAR_42->lock, VAR_46);


 VAR_45 = FUNC_4(VAR_43, VAR_44, "%s version %s,"
  "chiprev %02x, locctl %02x\n"
  "irqenb0 %02x irqenb1 %02x "
  "irqstat0 %02x irqstat1 %02x\n",
  VAR_36, VAR_37, VAR_42->chiprev,
  FUNC_3(VAR_42, VAR_27),
  FUNC_3(VAR_42, VAR_23),
  FUNC_3(VAR_42, VAR_24),
  FUNC_3(VAR_42, VAR_25),
  FUNC_3(VAR_42, VAR_26));
 VAR_44 -= VAR_45;
 VAR_43 += VAR_45;


 VAR_47 = FUNC_3(VAR_42, VAR_3);
 VAR_45 = FUNC_4(VAR_43, VAR_44, "\ndmareq %02x: %s %s%s%s%s\n",
  VAR_47, VAR_38[(VAR_47 & 0x01) + 1],
  VAR_47 & (1 << VAR_5) ? "dack " : "",
  VAR_47 & (1 << VAR_7) ? "reqenb " : "",
  VAR_47 & (1 << VAR_6) ? "req " : "",
  VAR_47 & (1 << VAR_4) ? "valid " : "");
 VAR_44 -= VAR_45;
 VAR_43 += VAR_45;


 VAR_47 = FUNC_3(VAR_42, VAR_32);
 if (VAR_47 & (1 << VAR_35)) {
  if (VAR_47 & (1 << VAR_33))
   VAR_50 = "high speed";
  else if (VAR_42->gadget.speed == VAR_34)
   VAR_50 = "powered";
  else
   VAR_50 = "full speed";
 } else
  VAR_50 = "not attached";
 VAR_45 = FUNC_4(VAR_43, VAR_44,
  "usbctl0 %02x usbctl1 %02x addr 0x%02x (%s)\n",
  FUNC_3(VAR_42, VAR_31), VAR_47,
  FUNC_3(VAR_42, VAR_29), VAR_50);
 VAR_44 -= VAR_45;
 VAR_43 += VAR_45;


 for (VAR_49 = 0; VAR_49 < 4; ++VAR_49) {
  struct net2272_ep *VAR_51;

  VAR_51 = &VAR_42->ep[VAR_49];
  if (VAR_49 && !VAR_51->desc)
   continue;

  VAR_47 = FUNC_2(VAR_51, VAR_13);
  VAR_48 = FUNC_2(VAR_51, VAR_15);
  VAR_45 = FUNC_4(VAR_43, VAR_44,
   "\n%s\tcfg %02x rsp (%02x) %s%s%s%s%s%s%s%s"
   "irqenb %02x\n",
   VAR_51->ep.name, VAR_47, VAR_48,
   (VAR_48 & (1 << VAR_0)) ? "NAK " : "",
   (VAR_48 & (1 << VAR_21)) ? "hide " : "",
   (VAR_48 & (1 << VAR_1)) ? "auto " : "",
   (VAR_48 & (1 << VAR_22)) ? "interrupt " : "",
   (VAR_48 & (1 << VAR_2)) ? "status " : "",
   (VAR_48 & (1 << VAR_28)) ? "NAKmode " : "",
   (VAR_48 & (1 << VAR_9)) ? "DATA1 " : "DATA0 ",
   (VAR_48 & (1 << VAR_8)) ? "HALT " : "",
   FUNC_2(VAR_51, VAR_14));
  VAR_44 -= VAR_45;
  VAR_43 += VAR_45;

  VAR_45 = FUNC_4(VAR_43, VAR_44,
   "\tstat0 %02x stat1 %02x avail %04x "
   "(ep%d%s-%s)%s\n",
   FUNC_2(VAR_51, VAR_16),
   FUNC_2(VAR_51, VAR_17),
   (FUNC_2(VAR_51, VAR_11) << 8) | FUNC_2(VAR_51, VAR_10),
   VAR_47 & 0x0f,
   VAR_51->is_in ? "in" : "out",
   FUNC_7(VAR_47 >> 5),
   VAR_51->stopped ? "*" : "");
  VAR_44 -= VAR_45;
  VAR_43 += VAR_45;

  VAR_45 = FUNC_4(VAR_43, VAR_44,
   "\tep_transfer %06x\n",
   ((FUNC_2(VAR_51, VAR_20) & 0xff) << 16) |
   ((FUNC_2(VAR_51, VAR_19) & 0xff) << 8) |
   ((FUNC_2(VAR_51, VAR_18) & 0xff)));
  VAR_44 -= VAR_45;
  VAR_43 += VAR_45;

  VAR_47 = FUNC_2(VAR_51, VAR_12) & 0x03;
  VAR_48 = (FUNC_2(VAR_51, VAR_12) >> 2) & 0x03;
  VAR_45 = FUNC_4(VAR_43, VAR_44,
   "\tbuf-a %s buf-b %s\n",
   FUNC_0(VAR_47),
   FUNC_0(VAR_48));
  VAR_44 -= VAR_45;
  VAR_43 += VAR_45;
 }

 FUNC_6(&VAR_42->lock, VAR_46);

 return VAR_30 - VAR_44;
}
