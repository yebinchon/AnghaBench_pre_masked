
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct denali_controller {int (* host_write ) (struct denali_controller*,int,int const) ;} ;


 int FUNC_0 (struct denali_controller*) ;
 int FUNC_1 (struct denali_controller*,int,int const) ;

__attribute__((used)) static void FUNC_2(struct denali_controller *VAR_0, u32 VAR_1,
        const u8 *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_0->host_write(VAR_0, VAR_1 | FUNC_0(VAR_0), VAR_2[VAR_4]);
}
