
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_mib {scalar_t__ mib_id; char* buf; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cw1200_common*,int) ;
 int FUNC_1 (struct cw1200_common*,struct wsm_mib*,struct wsm_buf*) ;

__attribute__((used)) static int FUNC_2(struct cw1200_common *VAR_1,
    struct wsm_mib *VAR_2,
    struct wsm_buf *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_2->mib_id == VAR_0) {

  const char *VAR_5 = VAR_2->buf;
  FUNC_0(VAR_1, (VAR_5[0] & 0x0F) ? 1 : 0);
 }
 return 0;
}
