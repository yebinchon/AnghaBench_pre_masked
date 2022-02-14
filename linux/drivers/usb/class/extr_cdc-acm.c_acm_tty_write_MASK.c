
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct acm* driver_data; } ;
struct acm_wb {int len; int urb; scalar_t__ use; int buf; } ;
struct acm {int writesize; int write_lock; int delayed; scalar_t__ susp_count; int control; TYPE_1__* data; int dev; struct acm_wb* wb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct acm*,struct acm_wb*) ;
 int FUNC_1 (struct acm*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,unsigned char const*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_1,
     const unsigned char *VAR_2, int VAR_3)
{
 struct acm *VAR_4 = VAR_1->driver_data;
 int VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 struct acm_wb *VAR_8;

 if (!VAR_3)
  return 0;

 FUNC_2(&VAR_4->data->dev, "%d bytes from tty layer\n", VAR_3);

 FUNC_4(&VAR_4->write_lock, VAR_6);
 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 < 0) {
  FUNC_5(&VAR_4->write_lock, VAR_6);
  return 0;
 }
 VAR_8 = &VAR_4->wb[VAR_7];

 if (!VAR_4->dev) {
  VAR_8->use = 0;
  FUNC_5(&VAR_4->write_lock, VAR_6);
  return -VAR_0;
 }

 VAR_3 = (VAR_3 > VAR_4->writesize) ? VAR_4->writesize : VAR_3;
 FUNC_2(&VAR_4->data->dev, "writing %d bytes\n", VAR_3);
 FUNC_3(VAR_8->buf, VAR_2, VAR_3);
 VAR_8->len = VAR_3;

 VAR_5 = FUNC_7(VAR_4->control);
 if (VAR_5) {
  VAR_8->use = 0;
  FUNC_5(&VAR_4->write_lock, VAR_6);
  return VAR_5;
 }

 if (VAR_4->susp_count) {
  FUNC_6(VAR_8->urb, &VAR_4->delayed);
  FUNC_5(&VAR_4->write_lock, VAR_6);
  return VAR_3;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_8);
 FUNC_5(&VAR_4->write_lock, VAR_6);

 if (VAR_5 < 0)
  return VAR_5;
 return VAR_3;
}
