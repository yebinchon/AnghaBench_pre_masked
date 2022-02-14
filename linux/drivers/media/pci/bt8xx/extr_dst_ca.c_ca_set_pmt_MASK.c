
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dst_state {int dummy; } ;
struct ca_msg {int * msg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int ,int,char*,int) ;
 int FUNC_3 (struct dst_state*,struct ca_msg*,struct ca_msg*,int) ;
 int FUNC_4 (int *,char,int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct dst_state*,struct ca_msg*,int,int) ;

__attribute__((used)) static int FUNC_7(struct dst_state *VAR_2, struct ca_msg *VAR_3, struct ca_msg *VAR_4, u8 VAR_5, u8 VAR_6)
{
 u32 VAR_7 = 0;
 u8 VAR_8 = 8;

 VAR_7 = FUNC_0(&VAR_3->msg[3]);
 FUNC_2(VAR_1, VAR_0, 1, " CA Message length=[%d]", VAR_7);
 FUNC_1(&VAR_3->msg[4], VAR_7, 0);

 FUNC_4(VAR_4->msg, '\0', VAR_7);
 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_7);
 FUNC_5(VAR_4->msg, VAR_4->msg[0]);

 FUNC_1(VAR_4->msg, (VAR_7 + VAR_8), 0);
 FUNC_6(VAR_2, VAR_4, (VAR_7 + VAR_8), VAR_5);

 return 0;
}
