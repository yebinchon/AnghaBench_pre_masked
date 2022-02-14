
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int newi2c; } ;
struct ivtv {int sd_video; TYPE_1__ options; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct ivtv* itv; } ;





 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (void*) ;
 long FUNC_1 (struct file*,unsigned int,void*) ;
 int FUNC_2 (struct ivtv*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_4, void *VAR_5, bool VAR_6,
    unsigned int VAR_7, void *VAR_8)
{
 struct ivtv *VAR_9 = FUNC_0(VAR_5)->itv;

 if (!VAR_6) {
  switch (VAR_7) {
  case 139:
   return -VAR_0;
  }
 }

 switch (VAR_7) {
 case 128: {
  u32 VAR_10 = *(u32 *)VAR_8;

  if ((VAR_10 == 0 && VAR_9->options.newi2c) || (VAR_10 & 0x01))
   FUNC_2(VAR_9);
  if (VAR_10 & 0x02)
   FUNC_3(VAR_9->sd_video, VAR_2, VAR_3, 0);
  break;
 }

 case 140:
 case 139:
  return FUNC_1(VAR_4, VAR_7, (void *)VAR_8);

 default:
  return -VAR_1;
 }
 return 0;
}
