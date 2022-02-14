
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct vc_data {size_t vc_num; int vc_y; int vc_x; int vc_pos; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_8__ {TYPE_2__ n; } ;
struct var_t {TYPE_3__ u; } ;
struct TYPE_6__ {int cy; } ;
struct TYPE_10__ {TYPE_1__ ht; } ;
struct TYPE_9__ {int spinlock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct vc_data*) ;
 TYPE_5__** VAR_11 ;
 TYPE_4__ VAR_12 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;
 struct var_t* FUNC_6 (int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_7(struct vc_data *VAR_17, u_char VAR_18, char VAR_19)
{
 unsigned long VAR_20;
 struct var_t *VAR_21;

 FUNC_3(&VAR_12.spinlock, VAR_20);
 VAR_14 &= 0xfe;
 if (!VAR_16 || VAR_19 || VAR_15 || VAR_5 == VAR_1) {
  FUNC_4(&VAR_12.spinlock, VAR_20);
  return;
 }
 VAR_15 &= 0xfe;
 if (VAR_13)
  FUNC_5();



 VAR_6 = VAR_18 + 1;
 VAR_8 = VAR_17->vc_pos;
 VAR_9 = VAR_17->vc_x;
 VAR_10 = VAR_17->vc_y;
 VAR_11[VAR_17->vc_num]->ht.cy = VAR_17->vc_y;
 VAR_3 = VAR_17->vc_num;
 if (VAR_5 == VAR_0)
  FUNC_2(VAR_17);
 VAR_21 = FUNC_6(VAR_2);
 FUNC_0(&VAR_4,
    VAR_7 + FUNC_1(VAR_21->u.n.value));
 FUNC_4(&VAR_12.spinlock, VAR_20);
}
