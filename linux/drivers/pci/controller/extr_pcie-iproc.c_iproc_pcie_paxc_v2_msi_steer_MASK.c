
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct iproc_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iproc_pcie*,int ) ;
 int FUNC_1 (struct iproc_pcie*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct iproc_pcie *VAR_8, u64 VAR_9,
      bool VAR_10)
{
 u32 VAR_11;

 if (!VAR_10) {




  VAR_11 = FUNC_0(VAR_8, VAR_4);
  VAR_11 &= ~VAR_7;
  FUNC_1(VAR_8, VAR_4, VAR_11);
  return;
 }







 FUNC_1(VAR_8, VAR_3,
        (u32)(VAR_9 >> 13));


 FUNC_1(VAR_8, VAR_6, 0);


 VAR_11 = FUNC_0(VAR_8, VAR_5);
 VAR_11 |= VAR_0;
 FUNC_1(VAR_8, VAR_5, VAR_11);





 VAR_9 >>= 2;
 FUNC_1(VAR_8, VAR_1,
        FUNC_3(VAR_9));
 FUNC_1(VAR_8, VAR_2,
        FUNC_2(VAR_9));


 VAR_11 = FUNC_0(VAR_8, VAR_4);
 VAR_11 |= VAR_7;
 FUNC_1(VAR_8, VAR_4, VAR_11);
}
