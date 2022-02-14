
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int * sess_cmd_map; int sess_tag_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (unsigned int,unsigned int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,unsigned int,int,int,int,int ) ;

int FUNC_4(struct se_session *VAR_4,
            unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 VAR_4->sess_cmd_map = FUNC_0(VAR_6, VAR_5,
      VAR_1 | VAR_3);
 if (!VAR_4->sess_cmd_map) {
  FUNC_2("Unable to allocate se_sess->sess_cmd_map\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(&VAR_4->sess_tag_pool, VAR_5, -1,
   0, VAR_1, VAR_2);
 if (VAR_7 < 0) {
  FUNC_2("Unable to init se_sess->sess_tag_pool,"
   " tag_num: %u\n", VAR_5);
  FUNC_1(VAR_4->sess_cmd_map);
  VAR_4->sess_cmd_map = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
