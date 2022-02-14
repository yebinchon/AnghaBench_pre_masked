
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct vc_data {int dummy; } ;
struct TYPE_2__ {int spinlock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_9, u_char VAR_10, char VAR_11)
{
 unsigned long VAR_12;

 FUNC_1(&VAR_1.spinlock, VAR_12);
 if (VAR_11) {
  VAR_5 = 0;
  VAR_3 = 0;
  FUNC_2(&VAR_1.spinlock, VAR_12);
  return;
 }
 if (!VAR_8 || VAR_4) {
  FUNC_2(&VAR_1.spinlock, VAR_12);
  return;
 }
 VAR_7 &= 0xfe;
 VAR_5 = VAR_10;
 VAR_3++;
 VAR_6 &= 0xfe;
 if (VAR_2 == 2 && VAR_10 >= VAR_0)
  FUNC_0(VAR_10);
 FUNC_2(&VAR_1.spinlock, VAR_12);
}
