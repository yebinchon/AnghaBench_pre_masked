
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct csio_hw*,char*,int,...) ;
 int FUNC_3 (struct csio_hw*) ;
 int FUNC_4 (struct csio_hw*,int ) ;
 int FUNC_5 (struct csio_hw*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct csio_hw *VAR_5)
{
 uint32_t VAR_6, VAR_7 = FUNC_4(VAR_5, VAR_0);

 if (VAR_7 & VAR_3)
  FUNC_2(VAR_5, "MA parity error, parity status %#x\n",
       FUNC_4(VAR_5, VAR_2));
 if (VAR_7 & VAR_4) {
  VAR_6 = FUNC_4(VAR_5, VAR_1);
  FUNC_2(VAR_5,
     "MA address wrap-around error by client %u to address %#x\n",
     FUNC_1(VAR_6), FUNC_0(VAR_6) << 4);
 }
 FUNC_5(VAR_5, VAR_7, VAR_0);
 FUNC_3(VAR_5);
}
