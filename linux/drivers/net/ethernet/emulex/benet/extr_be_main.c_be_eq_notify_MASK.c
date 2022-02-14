
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct be_adapter {scalar_t__ db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct be_adapter*,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_10, u16 VAR_11,
    bool VAR_12, bool VAR_13, u16 VAR_14,
    u32 VAR_15)
{
 u32 VAR_16 = 0;

 VAR_16 |= VAR_11 & VAR_9;
 VAR_16 |= ((VAR_11 & VAR_7) << VAR_8);

 if (FUNC_0(VAR_10, VAR_0))
  return;

 if (VAR_12)
  VAR_16 |= 1 << VAR_6;
 if (VAR_13)
  VAR_16 |= 1 << VAR_1;
 VAR_16 |= 1 << VAR_2;
 VAR_16 |= VAR_14 << VAR_3;
 VAR_16 |= VAR_15 << VAR_5;
 FUNC_1(VAR_16, VAR_10->db + VAR_4);
}
