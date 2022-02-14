
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_seq {int dummy; } ;
struct fc_lport {int port_id; } ;
struct fc_frame {int dummy; } ;
typedef enum fc_rctl { ____Placeholder_fc_rctl } fc_rctl ;
typedef enum fc_fh_type { ____Placeholder_fc_fh_type } fc_fh_type ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_lport*,int ,struct fc_frame*,unsigned int,int*,int*,int *) ;
 int FUNC_1 (struct fc_lport*,int ,struct fc_frame*,unsigned int,int*,int*) ;
 struct fc_seq* FUNC_2 (struct fc_lport*,struct fc_frame*,void (*) (struct fc_seq*,struct fc_frame*,void*),int *,void*,int ) ;
 int FUNC_3 (struct fc_frame*,int,int ,int ,int,int ,int ) ;
 int FUNC_4 (struct fc_frame*) ;

struct fc_seq *FUNC_5(struct fc_lport *VAR_3, u32 VAR_4,
        struct fc_frame *VAR_5, unsigned int VAR_6,
        void (*VAR_7)(struct fc_seq *,
       struct fc_frame *,
       void *),
        void *VAR_8, u32 VAR_9)
{
 enum fc_rctl VAR_10;
 enum fc_fh_type VAR_11;
 int VAR_12;


 if ((VAR_6 >= VAR_1) && (VAR_6 <= VAR_0))
  VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_10, &VAR_11);
 else {

  VAR_12 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_10, &VAR_11, &VAR_4);
 }

 if (VAR_12) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 FUNC_3(VAR_5, VAR_10, VAR_4, VAR_3->port_id, VAR_11,
         VAR_2, 0);

 return FUNC_2(VAR_3, VAR_5, VAR_7, ((void*)0), VAR_8, VAR_9);
}
