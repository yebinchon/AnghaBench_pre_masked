
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_4(int VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_3, VAR_5);

 if (VAR_4) {
  FUNC_1((FUNC_0(VAR_0) | 0x10), VAR_0);
  FUNC_1((FUNC_0(VAR_2) | 0x10), VAR_2);

  FUNC_1((FUNC_0(VAR_0) | VAR_1), VAR_0);
  FUNC_1((FUNC_0(VAR_2) | VAR_1),
       VAR_2);
 } else {
  FUNC_1((FUNC_0(VAR_0) & (~VAR_1)), VAR_0);
  FUNC_1((FUNC_0(VAR_2) | VAR_1),
       VAR_2);
 }
 FUNC_3(&VAR_3, VAR_5);
}
