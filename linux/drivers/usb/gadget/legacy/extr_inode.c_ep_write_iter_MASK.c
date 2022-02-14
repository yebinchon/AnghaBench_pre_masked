
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb_priv {int dummy; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {int f_flags; struct ep_data* private_data; } ;
struct ep_data {scalar_t__ state; int lock; TYPE_1__* dev; int * ep; int name; int desc; } ;
typedef int ssize_t ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,size_t,struct iov_iter*) ;
 int FUNC_2 (struct kiocb*,struct kiocb_priv*,struct ep_data*,char*,size_t) ;
 int FUNC_3 (struct ep_data*,char*,size_t) ;
 int FUNC_4 (struct ep_data*,char*,size_t) ;
 int FUNC_5 (int ,struct ep_data*,int) ;
 size_t FUNC_6 (struct iov_iter*) ;
 scalar_t__ FUNC_7 (struct kiocb*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (size_t,int ) ;
 struct kiocb_priv* FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static ssize_t
FUNC_19(struct kiocb *VAR_7, struct iov_iter *VAR_8)
{
 struct file *VAR_9 = VAR_7->ki_filp;
 struct ep_data *VAR_10 = VAR_9->private_data;
 size_t VAR_11 = FUNC_6(VAR_8);
 bool VAR_12;
 ssize_t VAR_13;
 char *VAR_14;

 if ((VAR_13 = FUNC_5(VAR_9->f_flags, VAR_10, 1)) < 0)
  return VAR_13;

 VAR_12 = VAR_10->state == VAR_6;


 if (VAR_12 && !FUNC_16(&VAR_10->desc)) {
  if (FUNC_17(&VAR_10->desc) ||
      !FUNC_7(VAR_7)) {
   FUNC_12(&VAR_10->lock);
   return -VAR_2;
  }
  FUNC_0 (VAR_10->dev, "%s halt\n", VAR_10->name);
  FUNC_13(&VAR_10->dev->lock);
  if (FUNC_11(VAR_10->ep != ((void*)0)))
   FUNC_18(VAR_10->ep);
  FUNC_14(&VAR_10->dev->lock);
  FUNC_12(&VAR_10->lock);
  return -VAR_0;
 }

 VAR_14 = FUNC_9(VAR_11, VAR_5);
 if (FUNC_15(!VAR_14)) {
  FUNC_12(&VAR_10->lock);
  return -VAR_4;
 }

 if (FUNC_15(!FUNC_1(VAR_14, VAR_11, VAR_8))) {
  VAR_13 = -VAR_1;
  goto out;
 }

 if (FUNC_15(!VAR_12)) {
  VAR_13 = FUNC_3(VAR_10, VAR_14, VAR_11);
 } else if (FUNC_7(VAR_7)) {
  VAR_13 = FUNC_4(VAR_10, VAR_14, VAR_11);
 } else {
  struct kiocb_priv *VAR_15 = FUNC_10(sizeof *VAR_15, VAR_5);
  VAR_13 = -VAR_4;
  if (VAR_15) {
   VAR_13 = FUNC_2(VAR_7, VAR_15, VAR_10, VAR_14, VAR_11);
   if (VAR_13 == -VAR_3)
    VAR_14 = ((void*)0);
  }
 }
out:
 FUNC_8(VAR_14);
 FUNC_12(&VAR_10->lock);
 return VAR_13;
}
