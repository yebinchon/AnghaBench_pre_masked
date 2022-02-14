
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct ef4_nic*,int ,int ) ;
 unsigned long VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ef4_nic *VAR_9)
{
 unsigned long VAR_10 = VAR_8 + VAR_7;
 int VAR_11;


 for (;;) {
  VAR_11 = FUNC_0(VAR_9, VAR_1, VAR_2);
  if (VAR_11 < 0)
   return VAR_11;
  if ((VAR_11 &
       ((1 << VAR_5) - 1) << VAR_4) >=
      VAR_3)
   break;
  if (FUNC_2(VAR_8, VAR_10))
   return -VAR_0;
  FUNC_1(VAR_6);
 }

 return 0;
}
