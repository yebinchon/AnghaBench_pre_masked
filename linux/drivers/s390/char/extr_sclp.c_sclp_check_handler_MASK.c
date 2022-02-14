
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct ext_code {int dummy; } ;
typedef scalar_t__ addr_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ext_code VAR_8,
          unsigned int VAR_9, unsigned long VAR_10)
{
 u32 VAR_11;

 FUNC_0(VAR_0);
 VAR_11 = VAR_9 & 0xfffffff8;

 if (VAR_11 == 0)
  return;
 if (VAR_11 != (u32) (addr_t) VAR_3)
  FUNC_1("sclp: unsolicited interrupt for buffer at 0x%x\n",
        VAR_11);
 FUNC_2(&VAR_4);
 if (VAR_5 == VAR_7) {
  VAR_2.status = VAR_1;
  VAR_5 = VAR_6;
 }
 FUNC_3(&VAR_4);
}
