
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct h_epa {int dummy; } ;
struct TYPE_2__ {struct h_epa kernel; } ;
struct ehea_qp {TYPE_1__ epas; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct h_epa,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_3(struct ehea_qp *VAR_2, u16 VAR_3)
{
 struct h_epa VAR_4 = VAR_2->epas.kernel;
 FUNC_2(VAR_4, FUNC_1(VAR_1),
        FUNC_0(VAR_0, VAR_3));
}
