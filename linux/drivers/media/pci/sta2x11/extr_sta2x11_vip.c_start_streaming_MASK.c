
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct sta2x11_vip {int active; int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sta2x11_vip*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sta2x11_vip*,int ) ;
 struct sta2x11_vip* FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_5(struct vb2_queue *VAR_3, unsigned int VAR_4)
{
 struct sta2x11_vip *VAR_5 = FUNC_4(VAR_3);

 FUNC_1(&VAR_5->slock);

 FUNC_0(VAR_5, VAR_0, VAR_1 | VAR_2);
 FUNC_2(&VAR_5->slock);

 if (VAR_4)
  FUNC_3(VAR_5, VAR_5->active);

 return 0;
}
