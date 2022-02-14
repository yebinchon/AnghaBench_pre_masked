
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct raw_data {int entry; int * data; scalar_t__ len; } ;
struct gb_raw {scalar_t__ list_data; int list_lock; int list; TYPE_2__* connection; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bundle; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 struct raw_data* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gb_raw *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 struct raw_data *VAR_8;
 struct device *VAR_9 = &VAR_5->connection->bundle->dev;
 int VAR_10 = 0;

 if (VAR_6 > VAR_4) {
  FUNC_0(VAR_9, "Too big of a data packet, rejected\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_5->list_lock);
 if ((VAR_5->list_data + VAR_6) > VAR_3) {
  FUNC_0(VAR_9, "Too much data in receive buffer, now dropping packets\n");
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_8 = FUNC_1(sizeof(*VAR_8) + VAR_6, VAR_2);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto exit;
 }

 VAR_5->list_data += VAR_6;
 VAR_8->len = VAR_6;
 FUNC_3(&VAR_8->data[0], VAR_7, VAR_6);

 FUNC_2(&VAR_8->entry, &VAR_5->list);
exit:
 FUNC_5(&VAR_5->list_lock);
 return VAR_10;
}
