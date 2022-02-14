
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int valid_bit; } ;
struct qbman_swp {TYPE_2__ mc; TYPE_1__* desc; } ;
struct TYPE_3__ {int qman_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct qbman_swp*,int ,int ) ;

void FUNC_2(struct qbman_swp *VAR_4, void *VAR_5, u8 VAR_6)
{
 u8 *VAR_7 = VAR_5;

 if ((VAR_4->desc->qman_version & VAR_2) < VAR_1) {
  FUNC_0();
  *VAR_7 = VAR_6 | VAR_4->mc.valid_bit;
 } else {
  *VAR_7 = VAR_6 | VAR_4->mc.valid_bit;
  FUNC_0();
  FUNC_1(VAR_4, VAR_0, VAR_3);
 }
}
