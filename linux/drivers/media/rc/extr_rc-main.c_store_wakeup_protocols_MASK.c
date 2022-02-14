
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_4__ {int data; scalar_t__ mask; } ;
struct rc_dev {unsigned long long allowed_wakeup_protocols; int wakeup_protocol; size_t (* s_wakeup_filter ) (struct rc_dev*,TYPE_1__*) ;int lock; TYPE_1__ scancode_wakeup_filter; int dev; scalar_t__ encode_wakeup; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;
struct TYPE_5__ {char* name; } ;


 int FUNC_0 (TYPE_2__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (unsigned long long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_3 ;
 size_t FUNC_5 (struct rc_dev*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 struct rc_dev* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4,
          struct device_attribute *VAR_5,
          const char *VAR_6, size_t VAR_7)
{
 struct rc_dev *VAR_8 = FUNC_7(VAR_4);
 enum rc_proto VAR_9 = VAR_2;
 ssize_t VAR_10;
 u64 VAR_11;
 int VAR_12;

 FUNC_3(&VAR_8->lock);

 VAR_11 = VAR_8->allowed_wakeup_protocols;

 if (!FUNC_6(VAR_6, "none")) {
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++) {
   if ((VAR_11 & (1ULL << VAR_12)) &&
       FUNC_6(VAR_6, VAR_3[VAR_12].name)) {
    VAR_9 = VAR_12;
    break;
   }
  }

  if (VAR_12 == FUNC_0(VAR_3)) {
   VAR_10 = -VAR_0;
   goto out;
  }

  if (VAR_8->encode_wakeup) {
   u64 VAR_13 = 1ULL << VAR_9;

   FUNC_2(&VAR_13);
   if (!VAR_13) {
    VAR_10 = -VAR_0;
    goto out;
   }
  }
 }

 if (VAR_8->wakeup_protocol != VAR_9) {
  VAR_8->wakeup_protocol = VAR_9;
  FUNC_1(&VAR_8->dev, "Wakeup protocol changed to %d\n", VAR_9);

  if (VAR_9 == VAR_1)
   VAR_8->scancode_wakeup_filter.data = 0x800f0000;
  else
   VAR_8->scancode_wakeup_filter.data = 0;
  VAR_8->scancode_wakeup_filter.mask = 0;

  VAR_10 = VAR_8->s_wakeup_filter(VAR_8, &VAR_8->scancode_wakeup_filter);
  if (VAR_10 == 0)
   VAR_10 = VAR_7;
 } else {
  VAR_10 = VAR_7;
 }

out:
 FUNC_4(&VAR_8->lock);
 return VAR_10;
}
