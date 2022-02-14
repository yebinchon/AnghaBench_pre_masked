
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (struct cw1200_common*,struct wsm_buf*,int *,int ,int ) ;
 int FUNC_2 (struct cw1200_common*) ;

int FUNC_3(struct cw1200_common *VAR_2)
{
 int VAR_3;
 struct wsm_buf *VAR_4 = &VAR_2->wsm_cmd_buf;
 FUNC_0(VAR_2);
 VAR_3 = FUNC_1(VAR_2, VAR_4, ((void*)0),
      VAR_1, VAR_0);
 FUNC_2(VAR_2);
 return VAR_3;
}
