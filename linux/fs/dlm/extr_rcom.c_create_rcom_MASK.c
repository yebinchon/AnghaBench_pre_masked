
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_version; int h_length; int h_cmd; int h_nodeid; int h_lockspace; } ;
struct dlm_rcom {int rc_type; int rc_seq; TYPE_1__ rc_header; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int ls_recover_lock; int ls_recover_seq; int ls_global_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dlm_mhandle* FUNC_0 (int,int,int ,char**) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dlm_ls *VAR_5, int VAR_6, int VAR_7, int VAR_8,
         struct dlm_rcom **VAR_9, struct dlm_mhandle **VAR_10)
{
 struct dlm_rcom *VAR_11;
 struct dlm_mhandle *VAR_12;
 char *VAR_13;
 int VAR_14 = sizeof(struct dlm_rcom) + VAR_8;

 VAR_12 = FUNC_0(VAR_6, VAR_14, VAR_4, &VAR_13);
 if (!VAR_12) {
  FUNC_2("create_rcom to %d type %d len %d ENOBUFS",
     VAR_6, VAR_7, VAR_8);
  return -VAR_3;
 }
 FUNC_3(VAR_13, 0, VAR_14);

 VAR_11 = (struct dlm_rcom *) VAR_13;

 VAR_11->rc_header.h_version = (VAR_0 | VAR_1);
 VAR_11->rc_header.h_lockspace = VAR_5->ls_global_id;
 VAR_11->rc_header.h_nodeid = FUNC_1();
 VAR_11->rc_header.h_length = VAR_14;
 VAR_11->rc_header.h_cmd = VAR_2;

 VAR_11->rc_type = VAR_7;

 FUNC_4(&VAR_5->ls_recover_lock);
 VAR_11->rc_seq = VAR_5->ls_recover_seq;
 FUNC_5(&VAR_5->ls_recover_lock);

 *VAR_10 = VAR_12;
 *VAR_9 = VAR_11;
 return 0;
}
