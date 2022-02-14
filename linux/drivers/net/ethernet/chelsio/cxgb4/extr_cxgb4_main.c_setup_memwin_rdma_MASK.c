
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int start; scalar_t__ size; } ;
struct TYPE_4__ {TYPE_1__ ocq; } ;
struct adapter {TYPE_2__ vres; int pdev; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*,int ) ;
 int FUNC_8 (struct adapter*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_4)
{
 if (VAR_4->vres.ocq.size) {
  u32 VAR_5;
  unsigned int VAR_6;

  VAR_5 = FUNC_6(VAR_4, VAR_2);
  VAR_5 &= VAR_3;
  VAR_5 += FUNC_1(VAR_4->pdev, &VAR_4->vres);
  VAR_6 = FUNC_5(VAR_4->vres.ocq.size) >> 10;
  FUNC_8(VAR_4,
        FUNC_2(VAR_0, 3),
        VAR_5 | FUNC_0(1) | FUNC_3(FUNC_4(VAR_6)));
  FUNC_8(VAR_4,
        FUNC_2(VAR_1, 3),
        VAR_4->vres.ocq.start);
  FUNC_7(VAR_4,
       FUNC_2(VAR_1, 3));
 }
}
