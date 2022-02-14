
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct uwb_rceb {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_est_entry {size_t size; unsigned int offset; int type; } ;
struct uwb_est {size_t entries; int product; int vendor; int type_event_high; struct uwb_est_entry* entry; } ;
typedef size_t ssize_t ;
typedef int __le16 ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;


 int FUNC_1 (struct device*,char*,struct uwb_est*,int ,int ,int ,size_t,...) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static
ssize_t FUNC_3(struct uwb_rc *VAR_2, struct uwb_est *VAR_3,
    u8 VAR_4, const struct uwb_rceb *VAR_5,
    size_t VAR_6)
{
 unsigned VAR_7;
 ssize_t VAR_8;
 struct device *VAR_9 = &VAR_2->uwb_dev.dev;
 const struct uwb_est_entry *VAR_10;

 VAR_8 = -VAR_0;
 if (VAR_4 >= VAR_3->entries) {
  FUNC_1(VAR_9, "EST %p 0x%04x/%04x/%04x[%u]: event %u out of range\n",
   VAR_3, VAR_3->type_event_high, VAR_3->vendor, VAR_3->product,
   VAR_3->entries, VAR_4);
  goto out;
 }
 VAR_8 = -VAR_0;
 VAR_10 = &VAR_3->entry[VAR_4];
 if (VAR_10->size == 0 && VAR_10->offset == 0) {
  FUNC_1(VAR_9, "EST %p 0x%04x/%04x/%04x[%u]: event %u unknown\n",
   VAR_3, VAR_3->type_event_high, VAR_3->vendor, VAR_3->product,
   VAR_3->entries, VAR_4);
  goto out;
 }
 VAR_7 = VAR_10->offset;
 if (VAR_7 == 0)
  VAR_8 = VAR_10->size;
 else {

  const void *VAR_11 = VAR_5;
  size_t VAR_12 = 0;
  VAR_7--;
  VAR_8 = -VAR_1;
  switch (VAR_10->type) {
  case 129: VAR_12 = sizeof(__le16); break;
  case 128: VAR_12 = sizeof(u8); break;
  default: FUNC_0();
  }
  if (VAR_7 + VAR_12 > VAR_6) {
   FUNC_1(VAR_9, "EST %p 0x%04x/%04x/%04x[%u]: "
    "not enough data to read extra size\n",
    VAR_3, VAR_3->type_event_high, VAR_3->vendor,
    VAR_3->product, VAR_3->entries);
   goto out;
  }
  VAR_8 = VAR_10->size;
  VAR_11 += VAR_7;
  switch (VAR_10->type) {
  case 129: VAR_8 += FUNC_2(*(__le16 *)VAR_11); break;
  case 128: VAR_8 += *(u8 *)VAR_11; break;
  default: FUNC_0();
  }
 }
out:
 return VAR_8;
}
