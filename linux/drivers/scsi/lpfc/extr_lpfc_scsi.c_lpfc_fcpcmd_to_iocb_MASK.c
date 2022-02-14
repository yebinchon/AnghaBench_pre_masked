
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fcp_cmnd {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(uint8_t *VAR_0, struct fcp_cmnd *VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < sizeof(struct fcp_cmnd);
      VAR_2 += sizeof(uint32_t), VAR_3++) {
  ((uint32_t *)VAR_0)[VAR_3] = FUNC_0(((uint32_t *)VAR_1)[VAR_3]);
 }
}
