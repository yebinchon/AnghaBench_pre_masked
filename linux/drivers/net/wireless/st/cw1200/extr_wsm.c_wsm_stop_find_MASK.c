
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (struct cw1200_common*,struct wsm_buf*,int *,int,int ) ;
 int FUNC_2 (struct cw1200_common*) ;

int FUNC_3(struct cw1200_common *VAR_1)
{
 int VAR_2;
 struct wsm_buf *VAR_3 = &VAR_1->wsm_cmd_buf;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_1(VAR_1, VAR_3, ((void*)0), 0x001A, VAR_0);
 FUNC_2(VAR_1);
 return VAR_2;
}
