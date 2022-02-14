
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep_data {int state; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,struct ep_data*,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4 (unsigned VAR_4, struct ep_data *VAR_5, bool VAR_6)
{
 int VAR_7;

 if (VAR_4 & VAR_2) {
  if (!FUNC_1(&VAR_5->lock))
   goto nonblock;
  if (VAR_5->state != 130 &&
      (!VAR_6 || VAR_5->state != 129)) {
   FUNC_2(&VAR_5->lock);
nonblock:
   VAR_7 = -VAR_0;
  } else
   VAR_7 = 0;
  return VAR_7;
 }

 VAR_7 = FUNC_0(&VAR_5->lock);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_5->state) {
 case 130:
  return 0;
 case 129:
  if (VAR_6)
   return 0;

 case 128:
  break;

 default:
  FUNC_3 ("%s: ep %p not available, state %d\n",
    VAR_3, VAR_5, VAR_5->state);
 }
 FUNC_2(&VAR_5->lock);
 return -VAR_1;
}
