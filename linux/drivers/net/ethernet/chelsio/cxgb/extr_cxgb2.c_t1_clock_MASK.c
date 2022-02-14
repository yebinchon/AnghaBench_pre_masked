
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int t1powersave; int tpi_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adapter*,int ,int*) ;
 int FUNC_1 (struct adapter*,int ,int) ;
 int FUNC_2 (struct adapter*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct adapter *VAR_5, int VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 int VAR_9;

 enum {
  M_CORE_BITS = 9,
  T_CORE_VAL = 0,
  T_CORE_BITS = 2,
  N_CORE_VAL = 0,
  N_CORE_BITS = 2,
  M_MEM_BITS = 9,
  T_MEM_VAL = 0,
  T_MEM_BITS = 2,
  N_MEM_VAL = 0,
  N_MEM_BITS = 2,
  NP_LOAD = 1 << 17,
  S_LOAD_MEM = 1 << 5,
  S_LOAD_CORE = 1 << 6,
  S_CLOCK = 1 << 3
 };

 if (!FUNC_5(VAR_5))
  return -VAR_2;

 if (VAR_6 & 2)
  return 0;

 if ((VAR_5->t1powersave & 1) == (VAR_6 & 1))
  return -VAR_1;

 if ((VAR_6 & 1) == VAR_3) {
  VAR_8 = 0x14;
  VAR_9 = 0x18;
  VAR_5->t1powersave = VAR_3;
 } else {
  VAR_8 = 0xe;
  VAR_9 = 0x10;
  VAR_5->t1powersave = VAR_4;
 }


 FUNC_3(&VAR_5->tpi_lock);


 FUNC_0(VAR_5, VAR_0, &VAR_7);
 VAR_7 |= NP_LOAD;
 FUNC_6(50);
 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_6(50);
 FUNC_0(VAR_5, VAR_0, &VAR_7);
 VAR_7 &= ~S_LOAD_CORE;
 VAR_7 &= ~S_CLOCK;
 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_6(50);


 FUNC_2(VAR_5, T_CORE_VAL, T_CORE_BITS);
 FUNC_2(VAR_5, N_CORE_VAL, N_CORE_BITS);
 FUNC_2(VAR_5, VAR_8, M_CORE_BITS);
 FUNC_6(50);


 FUNC_0(VAR_5, VAR_0, &VAR_7);
 VAR_7 |= S_LOAD_CORE;
 FUNC_6(50);
 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_6(50);
 FUNC_0(VAR_5, VAR_0, &VAR_7);
 VAR_7 &= ~S_LOAD_CORE;
 FUNC_6(50);
 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_6(50);


 FUNC_0(VAR_5, VAR_0, &VAR_7);
 VAR_7 |= NP_LOAD;
 FUNC_6(50);
 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_6(50);
 FUNC_0(VAR_5, VAR_0, &VAR_7);
 VAR_7 &= ~S_LOAD_MEM;
 VAR_7 &= ~S_CLOCK;
 FUNC_6(50);
 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_6(50);


 FUNC_2(VAR_5, T_MEM_VAL, T_MEM_BITS);
 FUNC_2(VAR_5, N_MEM_VAL, N_MEM_BITS);
 FUNC_2(VAR_5, VAR_9, M_MEM_BITS);
 FUNC_6(50);


 FUNC_0(VAR_5, VAR_0, &VAR_7);
 VAR_7 |= S_LOAD_MEM;
 FUNC_6(50);
 FUNC_1(VAR_5, VAR_0, VAR_7);
 FUNC_6(50);
 FUNC_0(VAR_5, VAR_0, &VAR_7);
 VAR_7 &= ~S_LOAD_MEM;
 FUNC_6(50);
 FUNC_1(VAR_5, VAR_0, VAR_7);

 FUNC_4(&VAR_5->tpi_lock);

 return 0;
}
