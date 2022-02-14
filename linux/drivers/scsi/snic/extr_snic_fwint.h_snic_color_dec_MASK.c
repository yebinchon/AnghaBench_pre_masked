
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snic_fw_req {int dummy; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline void
FUNC_1(struct snic_fw_req *VAR_0, u8 *VAR_1)
{
 u8 *VAR_2 = ((u8 *) VAR_0) + sizeof(struct snic_fw_req) - 1;

 *VAR_1 = *VAR_2 >> 7;







 FUNC_0();
}
