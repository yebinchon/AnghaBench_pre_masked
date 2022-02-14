
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct rcom_lock {int dummy; } ;
struct TYPE_2__ {int h_length; } ;
struct dlm_rcom {int rc_type; scalar_t__ rc_seq_reply; scalar_t__ rc_seq; TYPE_1__ rc_header; } ;
struct dlm_ls {int ls_recover_status; scalar_t__ ls_recover_seq; int ls_generation; int ls_recover_lock; int ls_flags; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_1 (struct dlm_ls*,char*,int,...) ;
 int FUNC_2 (struct dlm_ls*,char*,int,int,unsigned long long,unsigned long long,unsigned long long,int,int ) ;
 int FUNC_3 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_4 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_5 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_6 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_7 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_8 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;

void FUNC_12(struct dlm_ls *VAR_3, struct dlm_rcom *VAR_4, int VAR_5)
{
 int VAR_6 = sizeof(struct dlm_rcom) + sizeof(struct rcom_lock);
 int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 uint32_t VAR_12;
 uint64_t VAR_13;

 switch (VAR_4->rc_type) {
 case 128:
  VAR_8 = 1;
  break;
 case 131:
  VAR_9 = 1;
  break;
 case 130:
  VAR_9 = 1;
  VAR_8 = 1;
  break;
 case 133:
  VAR_10 = 1;
  break;
 case 132:
  VAR_10 = 1;
  VAR_8 = 1;
  break;
 case 135:
  VAR_11 = 1;
  break;
 case 134:
  VAR_11 = 1;
  VAR_8 = 1;
  break;
 };

 FUNC_9(&VAR_3->ls_recover_lock);
 VAR_12 = VAR_3->ls_recover_status;
 VAR_7 = FUNC_11(VAR_2, &VAR_3->ls_flags);
 VAR_13 = VAR_3->ls_recover_seq;
 FUNC_10(&VAR_3->ls_recover_lock);

 if (VAR_7 && (VAR_4->rc_type != 129))
  goto ignore;

 if (VAR_8 && (VAR_4->rc_seq_reply != VAR_13))
  goto ignore;

 if (!(VAR_12 & VAR_1) && (VAR_9 || VAR_10 || VAR_11))
  goto ignore;

 if (!(VAR_12 & VAR_0) && (VAR_10 || VAR_11))
  goto ignore;

 switch (VAR_4->rc_type) {
 case 129:
  FUNC_7(VAR_3, VAR_4);
  break;

 case 131:
  FUNC_6(VAR_3, VAR_4);
  break;

 case 133:
  FUNC_4(VAR_3, VAR_4);
  break;

 case 135:
  if (VAR_4->rc_header.h_length < VAR_6)
   goto Eshort;
  FUNC_3(VAR_3, VAR_4);
  break;

 case 128:
  FUNC_8(VAR_3, VAR_4);
  break;

 case 130:
  FUNC_8(VAR_3, VAR_4);
  break;

 case 132:
  FUNC_5(VAR_3, VAR_4);
  break;

 case 134:
  if (VAR_4->rc_header.h_length < VAR_6)
   goto Eshort;
  FUNC_0(VAR_3, VAR_4);
  break;

 default:
  FUNC_1(VAR_3, "receive_rcom bad type %d", VAR_4->rc_type);
 }
 return;

ignore:
 FUNC_2(VAR_3, "dlm_receive_rcom ignore msg %d "
    "from %d %llu %llu recover seq %llu sts %x gen %u",
     VAR_4->rc_type,
     VAR_5,
     (unsigned long long)VAR_4->rc_seq,
     (unsigned long long)VAR_4->rc_seq_reply,
     (unsigned long long)VAR_13,
     VAR_12, VAR_3->ls_generation);
 return;
Eshort:
 FUNC_1(VAR_3, "recovery message %d from %d is too short",
    VAR_4->rc_type, VAR_5);
}
