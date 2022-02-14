
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct denali_controller {int (* host_write ) (struct denali_controller*,int,int) ;} ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct denali_controller*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct denali_controller*,int,int) ;
 int FUNC_4 (struct denali_controller*,int,int) ;
 int FUNC_5 (struct denali_controller*,int,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct denali_controller *VAR_1,
          dma_addr_t VAR_2, int VAR_3, bool VAR_4)
{
 u32 VAR_5;
 const int VAR_6 = 1;

 VAR_5 = VAR_0 | FUNC_1(VAR_1) | VAR_3;







 VAR_1->host_write(VAR_1, VAR_5,
      0x01002000 | (64 << 16) |
      (VAR_4 ? FUNC_0(8) : 0) | VAR_6);


 VAR_1->host_write(VAR_1, VAR_5, FUNC_2(VAR_2));


 VAR_1->host_write(VAR_1, VAR_5, FUNC_6(VAR_2));
}
