
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rapl_domain {int dummy; } ;
struct TYPE_2__ {int floor_freq_reg_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct rapl_domain *VAR_4, bool VAR_5)
{
 static u32 VAR_6;
 u32 VAR_7;

 if (!VAR_3->floor_freq_reg_addr) {
  FUNC_2("Invalid floor frequency config register\n");
  return;
 }

 if (!VAR_6)
  FUNC_0(VAR_0, VAR_1,
         VAR_3->floor_freq_reg_addr,
         &VAR_6);
 VAR_7 = VAR_6;
 if (VAR_5) {
  VAR_7 &= ~(0x7f << 8);
  VAR_7 |= 1 << 8;
 }
 FUNC_1(VAR_0, VAR_2,
         VAR_3->floor_freq_reg_addr, VAR_7);
}
