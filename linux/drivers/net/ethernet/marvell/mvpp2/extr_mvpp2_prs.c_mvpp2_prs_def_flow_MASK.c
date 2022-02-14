
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int index; } ;
struct mvpp2_port {int id; int priv; } ;
typedef int pe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct mvpp2_prs_entry*) ;
 int FUNC_3 (int ,struct mvpp2_prs_entry*,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int) ;

int FUNC_10(struct mvpp2_port *VAR_5)
{
 struct mvpp2_prs_entry VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));

 VAR_7 = FUNC_1(VAR_5->priv, VAR_5->id);


 if (VAR_7 < 0) {

  VAR_7 = FUNC_7(VAR_5->priv,
      VAR_1,
            VAR_0);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_6.index = VAR_7;


  FUNC_5(&VAR_6, VAR_5->id, VAR_2);
  FUNC_6(&VAR_6, VAR_4, 1);


  FUNC_4(VAR_5->priv, VAR_6.index, VAR_3);
 } else {
  FUNC_3(VAR_5->priv, &VAR_6, VAR_7);
 }

 FUNC_8(&VAR_6, VAR_3);
 FUNC_9(&VAR_6, (1 << VAR_5->id));
 FUNC_2(VAR_5->priv, &VAR_6);

 return 0;
}
