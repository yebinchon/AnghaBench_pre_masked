
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ptp_system_timestamp {int dummy; } ;
struct e1000_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ptp_system_timestamp*) ;
 int FUNC_3 (struct ptp_system_timestamp*) ;

__attribute__((used)) static u64 FUNC_4(struct e1000_hw *VAR_6, u64 VAR_7,
      struct ptp_system_timestamp *VAR_8)
{
 u64 VAR_9, VAR_10, VAR_11;
 u64 VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_13 = FUNC_1(VAR_5) & VAR_2;
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {

  FUNC_3(VAR_8);
  VAR_12 = (u64)FUNC_1(VAR_4);
  FUNC_2(VAR_8);
  VAR_12 |= (u64)FUNC_1(VAR_3) << 32;

  VAR_9 = VAR_12 - VAR_7;
  VAR_11 = VAR_9;

  VAR_10 = VAR_13 ? FUNC_0(VAR_11, VAR_13) : (VAR_9 != 0);

  VAR_7 = VAR_12;

  if ((VAR_9 < VAR_0) && (VAR_10 == 0))
   break;
 }

 return VAR_7;
}
