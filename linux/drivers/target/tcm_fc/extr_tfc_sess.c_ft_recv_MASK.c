
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ft_sess {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;


 int FUNC_0 (struct fc_lport*,char*,int ) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct ft_sess*,struct fc_frame*) ;
 struct ft_sess* FUNC_4 (struct fc_lport*,int ) ;

__attribute__((used)) static void FUNC_5(struct fc_lport *VAR_0, struct fc_frame *VAR_1)
{
 struct ft_sess *VAR_2;
 u32 VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_0, "recv sid %x\n", VAR_3);

 VAR_2 = FUNC_4(VAR_0, VAR_3);
 if (!VAR_2) {
  FUNC_0(VAR_0, "sid %x sess lookup failed\n", VAR_3);

  FUNC_1(VAR_1);
  return;
 }
 FUNC_3(VAR_2, VAR_1);
}
