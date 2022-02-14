
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wsm_mib {scalar_t__ mib_id; scalar_t__ buf_size; int buf; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wsm_buf*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct wsm_buf*) ;
 scalar_t__ FUNC_3 (struct wsm_buf*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct cw1200_common *VAR_2,
    struct wsm_mib *VAR_3,
    struct wsm_buf *VAR_4)
{
 u16 VAR_5;
 if (FUNC_0(FUNC_3(VAR_4) != VAR_1))
  return -VAR_0;

 if (FUNC_0(FUNC_2(VAR_4) != VAR_3->mib_id))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 > VAR_3->buf_size)
  VAR_5 = VAR_3->buf_size;

 FUNC_1(VAR_4, VAR_3->buf, VAR_5);
 VAR_3->buf_size = VAR_5;
 return 0;

underflow:
 FUNC_0(1);
 return -VAR_0;
}
