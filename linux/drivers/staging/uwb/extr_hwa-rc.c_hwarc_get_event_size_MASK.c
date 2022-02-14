
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rceb {int bEventContext; int wEvent; int bEventType; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
typedef scalar_t__ ssize_t ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,scalar_t__,int ,size_t const) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static
ssize_t FUNC_2(struct uwb_rc *VAR_1, const struct uwb_rceb *VAR_2,
        size_t VAR_3, size_t VAR_4,
        const size_t VAR_5)
{
 ssize_t VAR_6 = -VAR_0;
 const void *VAR_7 = VAR_2;
 size_t VAR_8 = sizeof(__le16);
 struct device *VAR_9 = &VAR_1->uwb_dev.dev;

 if (VAR_4 + VAR_8 >= VAR_5) {
  FUNC_0(VAR_9, "Not enough data to read extra size of event "
   "0x%02x/%04x/%02x, only got %zu bytes.\n",
   VAR_2->bEventType, FUNC_1(VAR_2->wEvent),
   VAR_2->bEventContext, VAR_5);
  goto out;
 }
 VAR_7 += VAR_4;
 VAR_6 = VAR_3 + FUNC_1(*(__le16 *)VAR_7);
out:
 return VAR_6;
}
