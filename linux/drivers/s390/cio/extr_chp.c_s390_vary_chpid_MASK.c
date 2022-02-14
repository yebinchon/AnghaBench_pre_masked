
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int id; int cssid; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct chp_id) ;
 int FUNC_2 (struct chp_id,int) ;
 int FUNC_3 (struct chp_id,int) ;
 int FUNC_4 (char*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct chp_id VAR_0, int VAR_1)
{
 char VAR_2[15];
 int VAR_3;

 FUNC_4(VAR_2, VAR_1?"varyon%x.%02x":"varyoff%x.%02x", VAR_0.cssid,
  VAR_0.id);
 FUNC_0(2, VAR_2);

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_1 && !VAR_3)
  return 0;

 FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1);
 return 0;
}
