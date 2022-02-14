
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct uvc_video_chain {TYPE_2__* dev; TYPE_1__* selector; } ;
struct uvc_fh {struct uvc_video_chain* chain; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int quirks; int intfnum; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, unsigned int *VAR_5)
{
 struct uvc_fh *VAR_6 = VAR_4;
 struct uvc_video_chain *VAR_7 = VAR_6->chain;
 int VAR_8;
 u8 VAR_9;

 if (VAR_7->selector == ((void*)0) ||
     (VAR_7->dev->quirks & VAR_1)) {
  *VAR_5 = 0;
  return 0;
 }

 VAR_8 = FUNC_0(VAR_7->dev, VAR_0, VAR_7->selector->id,
        VAR_7->dev->intfnum, VAR_2,
        &VAR_9, 1);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_5 = VAR_9 - 1;
 return 0;
}
