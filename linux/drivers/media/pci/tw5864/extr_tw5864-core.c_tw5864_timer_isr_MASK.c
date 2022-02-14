
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw5864_input {int nr; int buf_id; int slock; int new_frame_deadline; int enabled; } ;
struct tw5864_dev {int encoder_busy; int next_input; int slock; struct tw5864_input* inputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct tw5864_input*) ;
 int FUNC_4 (struct tw5864_input*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct tw5864_dev *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;


 FUNC_7(VAR_2, VAR_4);

 FUNC_0(&VAR_5->slock, VAR_6);
 VAR_8 = VAR_5->encoder_busy;
 FUNC_1(&VAR_5->slock, VAR_6);

 if (VAR_8)
  return;





 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  int VAR_9 = (VAR_7 + VAR_5->next_input) % VAR_1;
  struct tw5864_input *VAR_10 = &VAR_5->inputs[VAR_9];
  int VAR_11;

  FUNC_0(&VAR_10->slock, VAR_6);
  if (!VAR_10->enabled)
   goto next;


  VAR_11 = FUNC_5(VAR_3, 0x3,
       2 * VAR_10->nr);

  if (VAR_10->buf_id != VAR_11) {
   VAR_10->buf_id = VAR_11;
   FUNC_3(VAR_10);
   FUNC_1(&VAR_10->slock, VAR_6);

   FUNC_0(&VAR_5->slock, VAR_6);
   VAR_5->encoder_busy = 1;
   VAR_5->next_input = (VAR_9 + 1) % VAR_1;
   FUNC_1(&VAR_5->slock, VAR_6);

   FUNC_4(VAR_10);
   break;
  }


  if (FUNC_2(VAR_10->new_frame_deadline)) {

   FUNC_6(VAR_0, 0x3,
          2 * VAR_10->nr, VAR_10->buf_id + 3);
   FUNC_3(VAR_10);
  }
next:
  FUNC_1(&VAR_10->slock, VAR_6);
 }
}
