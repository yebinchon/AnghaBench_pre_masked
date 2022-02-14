
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct uvc_video_chain {TYPE_2__* dev; TYPE_1__* selector; } ;
struct uvc_fh {struct uvc_video_chain* chain; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int quirks; int intfnum; } ;
struct TYPE_3__ {unsigned int bNrInPins; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uvc_fh*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 struct uvc_fh *VAR_7 = VAR_5;
 struct uvc_video_chain *VAR_8 = VAR_7->chain;
 int VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8->selector == ((void*)0) ||
     (VAR_8->dev->quirks & VAR_1)) {
  if (VAR_6)
   return -VAR_0;
  return 0;
 }

 if (VAR_6 >= VAR_8->selector->bNrInPins)
  return -VAR_0;

 VAR_10 = VAR_6 + 1;
 return FUNC_1(VAR_8->dev, VAR_2, VAR_8->selector->id,
         VAR_8->dev->intfnum, VAR_3,
         &VAR_10, 1);
}
