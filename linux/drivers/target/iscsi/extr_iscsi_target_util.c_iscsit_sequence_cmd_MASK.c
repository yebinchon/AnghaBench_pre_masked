
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct iscsi_conn {TYPE_1__* sess; } ;
struct iscsi_cmd {int i_state; } ;
typedef int __be32 ;
struct TYPE_4__ {int cmdsn_mutex; int sess_ooo_cmdsn_list; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct iscsi_cmd*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct iscsi_cmd*,int ) ;
 int FUNC_6 (struct iscsi_cmd*,int ,unsigned char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct iscsi_conn *VAR_3, struct iscsi_cmd *VAR_4,
   unsigned char *VAR_5, __be32 VAR_6)
{
 int VAR_7, VAR_8;
 bool VAR_9 = 0;
 u8 VAR_10 = VAR_1;

 FUNC_8(&VAR_3->sess->cmdsn_mutex);

 VAR_8 = FUNC_2(VAR_3->sess, FUNC_0(VAR_6));
 switch (VAR_8) {
 case 128:
  VAR_7 = FUNC_3(VAR_4, 0);
  if ((VAR_7 >= 0) && !FUNC_7(&VAR_3->sess->sess_ooo_cmdsn_list))
   FUNC_4(VAR_3->sess);
  else if (VAR_7 < 0) {
   VAR_9 = 1;
   VAR_7 = VAR_0;
  }
  break;
 case 131:
  VAR_7 = FUNC_5(VAR_3->sess, VAR_4, FUNC_0(VAR_6));
  if (VAR_7 < 0) {
   VAR_9 = 1;
   VAR_7 = VAR_0;
   break;
  }
  VAR_7 = 131;
  break;
 case 130:
 case 129:
 default:
  VAR_4->i_state = VAR_2;
  FUNC_1(VAR_4, VAR_3, VAR_4->i_state);





  VAR_7 = 130;
  break;
 }
 FUNC_9(&VAR_3->sess->cmdsn_mutex);

 if (VAR_9)
  FUNC_6(VAR_4, VAR_10, VAR_5);

 return VAR_7;
}
