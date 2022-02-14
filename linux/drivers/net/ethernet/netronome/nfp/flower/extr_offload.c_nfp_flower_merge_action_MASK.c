
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_fl_push_vlan {int dummy; } ;
struct TYPE_2__ {int act_len; int shortcut; } ;
struct nfp_fl_payload {char* action_data; TYPE_1__ meta; } ;
struct nfp_fl_output {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,unsigned int) ;
 int FUNC_2 (char*,unsigned int,struct nfp_fl_push_vlan*) ;
 int FUNC_3 (char*,unsigned int,struct nfp_fl_push_vlan**) ;
 unsigned int FUNC_4 (char*,char*,unsigned int,int*) ;

__attribute__((used)) static int
FUNC_5(struct nfp_fl_payload *VAR_3,
   struct nfp_fl_payload *VAR_4,
   struct nfp_fl_payload *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 struct nfp_fl_push_vlan *VAR_10 = ((void*)0);
 bool VAR_11 = 0;
 char *VAR_12;
 int VAR_13;


 VAR_6 = VAR_3->meta.act_len - sizeof(struct nfp_fl_output);
 VAR_7 = VAR_4->meta.act_len;

 if (!VAR_7)
  return -VAR_0;

 if (VAR_6 + VAR_7 > VAR_1)
  return -VAR_0;


 if (VAR_6)
  VAR_5->meta.shortcut = FUNC_0(VAR_2);
 else
  VAR_5->meta.shortcut = VAR_4->meta.shortcut;

 VAR_5->meta.act_len = VAR_6 + VAR_7;
 VAR_12 = VAR_5->action_data;


 VAR_8 = FUNC_4(VAR_12,
            VAR_3->action_data,
            VAR_6, &VAR_11);
 VAR_12 += VAR_8;
 VAR_6 -= VAR_8;
 VAR_9 = FUNC_4(VAR_12,
            VAR_4->action_data,
            VAR_7, ((void*)0));
 VAR_12 += VAR_9;
 VAR_7 -= VAR_9;





 if (VAR_11) {
  char *VAR_14 = &VAR_4->action_data[VAR_9];

  VAR_13 = FUNC_3(VAR_14, VAR_7,
        &VAR_10);
  if (VAR_13)
   return VAR_13;

  if (VAR_10) {
   VAR_9 += sizeof(*VAR_10);
   VAR_7 -= sizeof(*VAR_10);
  }
 }


 FUNC_1(VAR_12, VAR_3->action_data + VAR_8, VAR_6);

 if (VAR_10) {

  VAR_13 = FUNC_2(VAR_12, VAR_6,
       VAR_10);
  if (VAR_13)
   return VAR_13;

  VAR_5->meta.act_len -= sizeof(*VAR_10);
 }

 VAR_12 += VAR_6;
 FUNC_1(VAR_12, VAR_4->action_data + VAR_9, VAR_7);

 return 0;
}
