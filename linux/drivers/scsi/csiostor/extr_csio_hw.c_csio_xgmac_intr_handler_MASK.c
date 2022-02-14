
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct csio_hw*,char*,int) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*,int ) ;
 int FUNC_4 (struct csio_hw*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct csio_hw *VAR_3, int VAR_4)
{
 uint32_t VAR_5 = FUNC_3(VAR_3, FUNC_0(VAR_4, VAR_0));

 VAR_5 &= VAR_2 | VAR_1;
 if (!VAR_5)
  return;

 if (VAR_5 & VAR_2)
  FUNC_1(VAR_3, "XGMAC %d Tx FIFO parity error\n", VAR_4);
 if (VAR_5 & VAR_1)
  FUNC_1(VAR_3, "XGMAC %d Rx FIFO parity error\n", VAR_4);
 FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_4, VAR_0));
 FUNC_2(VAR_3);
}
