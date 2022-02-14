
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct file {struct bttv_fh* private_data; } ;
struct TYPE_5__ {struct bttv_fh* read_buf; } ;
struct bttv_fh {int fh; TYPE_1__ vbi; TYPE_1__ cap; struct bttv* btv; } ;
struct bttv {int mute; int users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bttv*,int ) ;
 int FUNC_1 (struct bttv*) ;
 int FUNC_2 (struct bttv*,struct bttv_fh*,int *) ;
 int FUNC_3 (TYPE_1__*,struct bttv_fh*) ;
 scalar_t__ FUNC_4 (struct bttv_fh*,int ) ;
 int FUNC_5 (struct bttv*,struct bttv_fh*,int ) ;
 int FUNC_6 (struct bttv_fh*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_4)
{
 struct bttv_fh *VAR_5 = VAR_4->private_data;
 struct bttv *VAR_6 = VAR_5->btv;


 if (FUNC_4(VAR_5, VAR_0))
  FUNC_2(VAR_6,VAR_5,((void*)0));


 if (FUNC_4(VAR_5, VAR_3)) {
  FUNC_11(&VAR_5->cap);
  FUNC_5(VAR_6,VAR_5,VAR_3);
 }
 if (VAR_5->cap.read_buf) {
  FUNC_3(&VAR_5->cap,VAR_5->cap.read_buf);
  FUNC_6(VAR_5->cap.read_buf);
 }
 if (FUNC_4(VAR_5, VAR_2)) {
  FUNC_5(VAR_6, VAR_5, VAR_2);
 }


 if (FUNC_4(VAR_5, VAR_1)) {
  FUNC_10(&VAR_5->vbi);
  FUNC_5(VAR_6,VAR_5,VAR_1);
 }



 FUNC_9(&VAR_5->cap);
 FUNC_9(&VAR_5->vbi);
 VAR_4->private_data = ((void*)0);

 VAR_6->users--;
 FUNC_1(VAR_6);

 if (!VAR_6->users)
  FUNC_0(VAR_6, VAR_6->mute);

 FUNC_7(&VAR_5->fh);
 FUNC_8(&VAR_5->fh);
 FUNC_6(VAR_5);
 return 0;
}
