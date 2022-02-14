
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int caps_lock; int nvec; } ;


 char FUNC_0 (int) ;
 char VAR_0 ;
 char VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 char VAR_3[] = { VAR_0, VAR_1, 0 };

 VAR_2.caps_lock = !VAR_2.caps_lock;

 if (VAR_2.caps_lock)

  VAR_3[2] = FUNC_0(0) | FUNC_0(1) | FUNC_0(2);

 FUNC_1(VAR_2.nvec, VAR_3, sizeof(VAR_3));
}
