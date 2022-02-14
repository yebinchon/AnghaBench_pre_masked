
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_update_ie {int length; int ies; int count; int what; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wsm_buf*,int ,int ) ;
 int FUNC_1 (struct wsm_buf*,int ) ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (struct cw1200_common*,struct wsm_buf*,int *,int,int ) ;
 int FUNC_4 (struct cw1200_common*) ;

int FUNC_5(struct cw1200_common *VAR_2,
    const struct wsm_update_ie *VAR_3)
{
 int VAR_4;
 struct wsm_buf *VAR_5 = &VAR_2->wsm_cmd_buf;

 FUNC_2(VAR_2);

 FUNC_1(VAR_5, VAR_3->what);
 FUNC_1(VAR_5, VAR_3->count);
 FUNC_0(VAR_5, VAR_3->ies, VAR_3->length);

 VAR_4 = FUNC_3(VAR_2, VAR_5, ((void*)0), 0x001B, VAR_1);

 FUNC_4(VAR_2);
 return VAR_4;

nomem:
 FUNC_4(VAR_2);
 return -VAR_0;
}
