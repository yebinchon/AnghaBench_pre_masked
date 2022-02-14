
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct camif_vp {int state; int active_buf_q; int pending_buf_q; struct camif_dev* camif; } ;
struct camif_dev {int slock; } ;
struct TYPE_2__ {int vb2_buf; } ;
struct camif_buffer {TYPE_1__ vb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct camif_buffer* FUNC_0 (struct camif_vp*) ;
 struct camif_buffer* FUNC_1 (struct camif_vp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct camif_dev*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct camif_vp *VAR_8)
{
 struct camif_dev *VAR_9 = VAR_8->camif;
 struct camif_buffer *VAR_10;
 unsigned long VAR_11;
 bool VAR_12;

 FUNC_4(&VAR_9->slock, VAR_11);
 VAR_12 = VAR_8->state & VAR_5;

 VAR_8->state &= ~(VAR_3 | VAR_4 | VAR_2 |
         VAR_0 | VAR_6 |
         VAR_5 | VAR_1);


 while (!FUNC_2(&VAR_8->pending_buf_q)) {
  VAR_10 = FUNC_1(VAR_8);
  FUNC_6(&VAR_10->vb.vb2_buf, VAR_7);
 }

 while (!FUNC_2(&VAR_8->active_buf_q)) {
  VAR_10 = FUNC_0(VAR_8);
  FUNC_6(&VAR_10->vb.vb2_buf, VAR_7);
 }

 FUNC_5(&VAR_9->slock, VAR_11);

 if (!VAR_12)
  return 0;

 return FUNC_3(VAR_9, 0);
}
