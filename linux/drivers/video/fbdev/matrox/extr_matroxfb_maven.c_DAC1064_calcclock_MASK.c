
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int *,unsigned int,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1, unsigned int VAR_2,
  unsigned int* VAR_3, unsigned int* VAR_4, unsigned int* VAR_5) {
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_0(&VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7);
 VAR_7 = (1 << VAR_7) - 1;
 if (VAR_6 <= 100000)
  ;
 else if (VAR_6 <= 140000)
  VAR_7 |= 0x08;
 else if (VAR_6 <= 180000)
  VAR_7 |= 0x10;
 else
  VAR_7 |= 0x18;
 *VAR_5 = VAR_7;
 return;
}
