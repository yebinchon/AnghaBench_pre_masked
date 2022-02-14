
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int wait; int flags; int * outbuf; int iuspin; int werr; } ;
struct urb {int status; struct wdm_device* context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_1)
{
 struct wdm_device *VAR_2;
 unsigned long VAR_3;

 VAR_2 = VAR_1->context;
 FUNC_2(&VAR_2->iuspin, VAR_3);
 VAR_2->werr = VAR_1->status;
 FUNC_3(&VAR_2->iuspin, VAR_3);
 FUNC_1(VAR_2->outbuf);
 VAR_2->outbuf = ((void*)0);
 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_4(&VAR_2->wait);
}
