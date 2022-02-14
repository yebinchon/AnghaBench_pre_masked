
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_mhandle {int dummy; } ;
struct TYPE_2__ {int h_version; int h_length; int h_cmd; int h_nodeid; int h_lockspace; } ;
struct dlm_message {int m_type; TYPE_1__ m_header; } ;
struct dlm_ls {int ls_global_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dlm_mhandle* FUNC_0 (int,int,int ,char**) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dlm_ls *VAR_5, int VAR_6,
      int VAR_7, int VAR_8,
      struct dlm_message **VAR_9,
      struct dlm_mhandle **VAR_10)
{
 struct dlm_message *VAR_11;
 struct dlm_mhandle *VAR_12;
 char *VAR_13;





 VAR_12 = FUNC_0(VAR_7, VAR_6, VAR_4, &VAR_13);
 if (!VAR_12)
  return -VAR_3;

 FUNC_2(VAR_13, 0, VAR_6);

 VAR_11 = (struct dlm_message *) VAR_13;

 VAR_11->m_header.h_version = (VAR_0 | VAR_1);
 VAR_11->m_header.h_lockspace = VAR_5->ls_global_id;
 VAR_11->m_header.h_nodeid = FUNC_1();
 VAR_11->m_header.h_length = VAR_6;
 VAR_11->m_header.h_cmd = VAR_2;

 VAR_11->m_type = VAR_8;

 *VAR_10 = VAR_12;
 *VAR_9 = VAR_11;
 return 0;
}
