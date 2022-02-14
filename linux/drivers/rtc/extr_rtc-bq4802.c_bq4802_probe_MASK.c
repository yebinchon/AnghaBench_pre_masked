
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct bq4802 {int rtc; int write; int read; int regs; TYPE_1__* r; int ioport; int lock; } ;
struct TYPE_2__ {int flags; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int ,int ) ;
 struct bq4802* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char*,int *,int ) ;
 void* FUNC_5 (struct platform_device*,int,int ) ;
 int FUNC_6 (struct platform_device*,struct bq4802*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_11)
{
 struct bq4802 *VAR_12 = FUNC_3(&VAR_11->dev, sizeof(*VAR_12), VAR_2);
 int VAR_13 = -VAR_1;

 if (!VAR_12)
  goto out;

 FUNC_8(&VAR_12->lock);

 VAR_12->r = FUNC_5(VAR_11, VAR_4, 0);
 if (!VAR_12->r) {
  VAR_12->r = FUNC_5(VAR_11, VAR_3, 0);
  VAR_13 = -VAR_0;
  if (!VAR_12->r)
   goto out;
 }
 if (VAR_12->r->flags & VAR_3) {
  VAR_12->ioport = VAR_12->r->start;
  VAR_12->read = VAR_7;
  VAR_12->write = VAR_9;
 } else if (VAR_12->r->flags & VAR_4) {
  VAR_12->regs = FUNC_2(&VAR_11->dev, VAR_12->r->start,
     FUNC_7(VAR_12->r));
  if (!VAR_12->regs){
   VAR_13 = -VAR_1;
   goto out;
  }
  VAR_12->read = VAR_8;
  VAR_12->write = VAR_10;
 } else {
  VAR_13 = -VAR_0;
  goto out;
 }

 FUNC_6(VAR_11, VAR_12);

 VAR_12->rtc = FUNC_4(&VAR_11->dev, "bq4802",
     &VAR_6, VAR_5);
 if (FUNC_0(VAR_12->rtc)) {
  VAR_13 = FUNC_1(VAR_12->rtc);
  goto out;
 }

 VAR_13 = 0;
out:
 return VAR_13;

}
