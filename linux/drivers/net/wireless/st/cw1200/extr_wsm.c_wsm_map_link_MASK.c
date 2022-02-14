
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wsm_map_link {int * mac_addr; int link_id; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {struct wsm_buf wsm_cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wsm_buf*,int *,int) ;
 int FUNC_1 (struct wsm_buf*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (struct cw1200_common*,struct wsm_buf*,int *,int,int ) ;
 int FUNC_5 (struct cw1200_common*) ;

int FUNC_6(struct cw1200_common *VAR_2, const struct wsm_map_link *VAR_3)
{
 int VAR_4;
 struct wsm_buf *VAR_5 = &VAR_2->wsm_cmd_buf;
 u16 VAR_6 = 0x001C | FUNC_2(VAR_3->link_id);

 FUNC_3(VAR_2);

 FUNC_0(VAR_5, &VAR_3->mac_addr[0], sizeof(VAR_3->mac_addr));
 FUNC_1(VAR_5, 0);

 VAR_4 = FUNC_4(VAR_2, VAR_5, ((void*)0), VAR_6, VAR_1);

 FUNC_5(VAR_2);
 return VAR_4;

nomem:
 FUNC_5(VAR_2);
 return -VAR_0;
}
