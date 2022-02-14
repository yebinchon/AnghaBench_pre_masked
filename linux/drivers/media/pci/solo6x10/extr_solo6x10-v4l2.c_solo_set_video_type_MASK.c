
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct solo_dev {int nr_chans; int cur_disp_ch; TYPE_1__** v4l2_enc; int video_type; int vidq; } ;
struct TYPE_2__ {int vidq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct solo_dev*,int ) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(struct solo_dev *VAR_3, bool VAR_4)
{
 int VAR_5;


 if (FUNC_5(&VAR_3->vidq))
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_3->nr_chans; VAR_5++)
  if (FUNC_5(&VAR_3->v4l2_enc[VAR_5]->vidq))
   return -VAR_0;
 VAR_3->video_type = VAR_4 ? VAR_2 :
      VAR_1;

 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_3->nr_chans; VAR_5++)
  FUNC_3(VAR_3->v4l2_enc[VAR_5]);
 return FUNC_4(VAR_3, VAR_3->cur_disp_ch);
}
