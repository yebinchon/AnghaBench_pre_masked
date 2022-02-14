
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_2__ {int polling_interval; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_10)
{
 int VAR_11 = 0;

 FUNC_1(VAR_3, "polling...\n");

 FUNC_5();

 if (!VAR_1 && VAR_4 != VAR_2) {
  VAR_2 = VAR_0;
  VAR_11 = 1;
 }

 if (!VAR_8 && VAR_5 != VAR_9) {
  VAR_9 = VAR_0;
  VAR_11 = 1;
 }

 if (VAR_11)
  FUNC_3();

 FUNC_0(&VAR_7);
 FUNC_4(&VAR_7,
         FUNC_2(VAR_6->polling_interval));
}
