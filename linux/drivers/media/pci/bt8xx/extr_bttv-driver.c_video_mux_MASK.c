
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t type; int nr; } ;
struct bttv {unsigned int svhs; TYPE_1__ c; } ;
struct TYPE_4__ {unsigned int video_inputs; int gpiomask2; int (* muxsel_hook ) (struct bttv*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct bttv*,unsigned int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (char*,int ,unsigned int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct bttv*,unsigned int) ;

__attribute__((used)) static int
FUNC_7(struct bttv *VAR_6, unsigned int VAR_7)
{
 int VAR_8,VAR_9;

 if (VAR_7 >= VAR_5[VAR_6->c.type].video_inputs)
  return -VAR_4;


 VAR_9 = VAR_5[VAR_6->c.type].gpiomask2;
 if (VAR_9)
  FUNC_5(VAR_9,VAR_9);

 if (VAR_7 == VAR_6->svhs) {
  FUNC_2(VAR_0, VAR_1);
  FUNC_2(VAR_0, VAR_3);
 } else {
  FUNC_0(~VAR_0, VAR_1);
  FUNC_0(~VAR_0, VAR_3);
 }
 VAR_8 = FUNC_3(VAR_6, VAR_7);
 FUNC_1(VAR_8<<5, ~(3<<5), VAR_2);
 FUNC_4("%d: video mux: input=%d mux=%d\n", VAR_6->c.nr, VAR_7, VAR_8);


 if(VAR_5[VAR_6->c.type].muxsel_hook)
  VAR_5[VAR_6->c.type].muxsel_hook (VAR_6, VAR_7);
 return 0;
}
