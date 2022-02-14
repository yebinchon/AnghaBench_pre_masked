
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct wsm_buf*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct cw1200_common *VAR_2,
        void *VAR_3,
        struct wsm_buf *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 != VAR_1)
  return -VAR_0;
 return 0;

underflow:
 FUNC_0(1);
 return -VAR_0;
}
