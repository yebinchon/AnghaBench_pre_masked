
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int vc_num; } ;
struct TYPE_3__ {int value; } ;
struct TYPE_4__ {TYPE_1__ n; } ;
struct var_t {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 struct var_t* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_5, int VAR_6)
{
 struct var_t *VAR_7;

 VAR_1 = VAR_5->vc_num;
 VAR_4 = VAR_6;
 VAR_7 = FUNC_2(VAR_0);
 FUNC_0(&VAR_2,
    VAR_3 + FUNC_1(VAR_7->u.n.value));
}
