
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static inline void FUNC_2(void)
{
 u8 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;

 FUNC_0(VAR_0, VAR_9, VAR_10);

 VAR_7 = (VAR_9 & VAR_3) >> VAR_5;
 VAR_8 = (VAR_9 & VAR_4) >> VAR_6;
 if (VAR_7)
  VAR_9 |= VAR_1;
 if (VAR_8)
  VAR_9 |= VAR_2;
 FUNC_1(VAR_0, VAR_9, VAR_10);
}
