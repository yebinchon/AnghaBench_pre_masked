
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct wsm_mib {size_t mib_id; void* buf; size_t buf_size; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wsm_buf*,void*,size_t) ;
 int FUNC_1 (struct wsm_buf*,size_t) ;
 int VAR_2 ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (struct cw1200_common*,struct wsm_buf*,struct wsm_mib*,int ,int ) ;
 int FUNC_4 (struct cw1200_common*) ;

int FUNC_5(struct cw1200_common *VAR_3, u16 VAR_4, void *VAR_5,
   size_t VAR_6)
{
 int VAR_7;
 struct wsm_buf *VAR_8 = &VAR_3->wsm_cmd_buf;
 struct wsm_mib VAR_9 = {
  .mib_id = VAR_4,
  .buf = VAR_5,
  .buf_size = VAR_6,
 };

 FUNC_2(VAR_3);

 FUNC_1(VAR_8, VAR_4);
 FUNC_1(VAR_8, VAR_6);
 FUNC_0(VAR_8, VAR_5, VAR_6);

 VAR_7 = FUNC_3(VAR_3, VAR_8, &VAR_9,
      VAR_2, VAR_1);
 FUNC_4(VAR_3);
 return VAR_7;

nomem:
 FUNC_4(VAR_3);
 return -VAR_0;
}
