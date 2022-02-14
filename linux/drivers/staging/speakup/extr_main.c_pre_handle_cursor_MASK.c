
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct vc_data {int dummy; } ;
struct TYPE_2__ {int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct vc_data*,scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct vc_data *VAR_9, u_char VAR_10, char VAR_11)
{
 unsigned long VAR_12;

 FUNC_1(&VAR_5.spinlock, VAR_12);
 if (VAR_3 == VAR_4) {
  VAR_6 &= 0xfe;
  if (!VAR_8 || VAR_11 || VAR_7) {
   FUNC_2(&VAR_5.spinlock, VAR_12);
   return VAR_1;
  }
  FUNC_0(&VAR_2);
  VAR_7 &= 0xfe;
  FUNC_3();
  FUNC_4(VAR_9, VAR_10 + 1);
  FUNC_2(&VAR_5.spinlock, VAR_12);
  return VAR_1;
 }
 FUNC_2(&VAR_5.spinlock, VAR_12);
 return VAR_0;
}
