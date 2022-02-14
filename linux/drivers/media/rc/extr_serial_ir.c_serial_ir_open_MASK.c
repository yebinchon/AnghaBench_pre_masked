
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rc_dev {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int lastkt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 size_t VAR_6 ;

__attribute__((used)) static int FUNC_5(struct rc_dev *VAR_7)
{
 unsigned long VAR_8;


 VAR_5.lastkt = FUNC_0();

 FUNC_3(&VAR_4[VAR_6].lock, VAR_8);


 FUNC_2(VAR_2, FUNC_1(VAR_2) & (~VAR_3));

 FUNC_2(VAR_0, FUNC_1(VAR_0) | VAR_1);

 FUNC_4(&VAR_4[VAR_6].lock, VAR_8);

 return 0;
}
