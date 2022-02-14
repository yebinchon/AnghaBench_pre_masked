
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {scalar_t__ type; int fh; struct cx231xx* dev; int vb_vidq; } ;
struct TYPE_2__ {int no_alt_vanc; } ;
struct cx231xx {int state; int open; scalar_t__ USE_ISO; int users; int vbi_or_sliced_cc_mode; int devlist_count; TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct cx231xx*,int ,int ) ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (struct cx231xx*,int ,int ) ;
 int FUNC_4 (struct cx231xx*,int ) ;
 int FUNC_5 (struct cx231xx*) ;
 int FUNC_6 (struct cx231xx*) ;
 int FUNC_7 (struct cx231xx*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct cx231xx_fh*) ;
 scalar_t__ FUNC_10 (struct cx231xx_fh*) ;
 int FUNC_11 (struct cx231xx_fh*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct file *VAR_8)
{
 struct cx231xx_fh *VAR_9 = VAR_8->private_data;
 struct cx231xx *VAR_10 = VAR_9->dev;

 FUNC_8("users=%d\n", VAR_10->users);

 FUNC_8("users=%d\n", VAR_10->users);
 if (FUNC_10(VAR_9))
  FUNC_11(VAR_9);







 if (!VAR_10->board.no_alt_vanc)
  if (VAR_9->type == VAR_5) {
   FUNC_15(&VAR_9->vb_vidq);
   FUNC_14(&VAR_9->vb_vidq);



   if (VAR_10->state & VAR_1) {
    if (FUNC_0(&VAR_10->devlist_count) > 0) {
     FUNC_2(VAR_10);
     VAR_9->dev = ((void*)0);
     return 0;
    }
    return 0;
   }


   FUNC_7(VAR_10);


   if (!VAR_10->vbi_or_sliced_cc_mode)
    FUNC_3(VAR_10, VAR_3, 0);
   else
    FUNC_3(VAR_10, VAR_2, 0);

   FUNC_12(&VAR_9->fh);
   FUNC_13(&VAR_9->fh);
   FUNC_9(VAR_9);
   VAR_10->users--;
   FUNC_16(&VAR_10->open);
   return 0;
  }

 FUNC_12(&VAR_9->fh);
 VAR_10->users--;
 if (!VAR_10->users) {
  FUNC_15(&VAR_9->vb_vidq);
  FUNC_14(&VAR_9->vb_vidq);



  if (VAR_10->state & VAR_1) {
   FUNC_2(VAR_10);
   VAR_9->dev = ((void*)0);
   return 0;
  }


  FUNC_1(VAR_10, VAR_7, VAR_6);


  if (VAR_10->USE_ISO)
   FUNC_6(VAR_10);
  else
   FUNC_5(VAR_10);
  FUNC_4(VAR_10, VAR_0);


  FUNC_3(VAR_10, VAR_4, 0);
 }
 FUNC_13(&VAR_9->fh);
 FUNC_9(VAR_9);
 FUNC_16(&VAR_10->open);
 return 0;
}
