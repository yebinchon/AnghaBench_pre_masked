
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* read ) (int ,int,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__ VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ,int,int *) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned long VAR_5 = VAR_4 + VAR_2;
 u8 VAR_6;

 FUNC_2(200, 300);
 do {
  if (!(VAR_3.read(VAR_0, 1, &VAR_6) &
      VAR_1))
   return 0;
  FUNC_2(100, 200);
 } while (FUNC_1(VAR_4, VAR_5));

 return 1;
}
