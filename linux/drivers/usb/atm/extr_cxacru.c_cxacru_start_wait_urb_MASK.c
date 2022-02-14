
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int actual_length; int status; } ;
struct cxacru_timer {int timer; struct urb* urb; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct completion*) ;

__attribute__((used)) static int FUNC_6(struct urb *VAR_3, struct completion *VAR_4,
     int *VAR_5)
{
 struct cxacru_timer VAR_6 = {
  .urb = VAR_3,
 };

 FUNC_4(&VAR_6.timer, VAR_1, 0);
 FUNC_2(&VAR_6.timer, VAR_2 + FUNC_3(VAR_0));
 FUNC_5(VAR_4);
 FUNC_0(&VAR_6.timer);
 FUNC_1(&VAR_6.timer);

 if (VAR_5)
  *VAR_5 = VAR_3->actual_length;
 return VAR_3->status;
}
