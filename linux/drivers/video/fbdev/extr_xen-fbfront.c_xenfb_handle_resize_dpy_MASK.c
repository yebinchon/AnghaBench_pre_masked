
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenfb_info {int resize_lock; scalar_t__ resize_dpy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct xenfb_info*) ;
 int FUNC_3 (struct xenfb_info*) ;

__attribute__((used)) static void FUNC_4(struct xenfb_info *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->resize_lock, VAR_1);
 if (VAR_0->resize_dpy) {
  if (!FUNC_3(VAR_0)) {
   VAR_0->resize_dpy = 0;
   FUNC_2(VAR_0);
  }
 }
 FUNC_1(&VAR_0->resize_lock, VAR_1);
}
