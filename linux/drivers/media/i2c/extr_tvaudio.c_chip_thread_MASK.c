
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {int prevmode; int audmode; int wt; scalar_t__ radio; struct v4l2_subdev sd; struct CHIPDESC* desc; } ;
struct CHIPDESC {int (* getrxsubchans ) (struct CHIPSTATE*) ;int (* setaudmode ) (struct CHIPSTATE*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct CHIPSTATE*) ;
 int FUNC_7 (struct CHIPSTATE*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_10(void *VAR_7)
{
 struct CHIPSTATE *VAR_8 = VAR_7;
 struct CHIPDESC *VAR_9 = VAR_8->desc;
 struct v4l2_subdev *VAR_10 = &VAR_8->sd;
 int VAR_11, VAR_12;

 FUNC_9(1, VAR_5, VAR_10, "thread started\n");
 FUNC_5();
 for (;;) {
  FUNC_4(VAR_0);
  if (!FUNC_0())
   FUNC_3();
  FUNC_4(VAR_1);
  FUNC_8();
  if (FUNC_0())
   break;
  FUNC_9(1, VAR_5, VAR_10, "thread wakeup\n");


  if (VAR_8->radio)
   continue;


  VAR_11 = VAR_9->getrxsubchans(VAR_8);
  if (VAR_11 == VAR_8->prevmode)
   continue;


  FUNC_9(1, VAR_5, VAR_10, "thread checkmode\n");

  VAR_8->prevmode = VAR_11;

  VAR_12 = 129;
  switch (VAR_8->audmode) {
  case 129:
   if (VAR_11 & VAR_2)
    VAR_12 = 132;
   break;
  case 128:
  case 132:
   if (VAR_11 & VAR_2)
    VAR_12 = 132;
   else if (VAR_11 & VAR_4)
    VAR_12 = 128;
   break;
  case 130:
   if (VAR_11 & VAR_3)
    VAR_12 = 130;
   else if (VAR_11 & VAR_4)
    VAR_12 = 128;
   break;
  case 131:
   if (VAR_11 & VAR_3)
    VAR_12 = 131;
   else if (VAR_11 & VAR_4)
    VAR_12 = 128;
  }
  VAR_9->setaudmode(VAR_8, VAR_12);


  FUNC_1(&VAR_8->wt, VAR_6+FUNC_2(2000));
 }

 FUNC_9(1, VAR_5, VAR_10, "thread exiting\n");
 return 0;
}
