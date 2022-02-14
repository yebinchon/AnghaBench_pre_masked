
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_prs_entry {unsigned int index; } ;
struct mvpp2_port {int id; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
typedef int pe ;
struct TYPE_2__ {scalar_t__ valid; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_3 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_4 (struct mvpp2*,unsigned int,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,unsigned int,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int ,int) ;
 unsigned int FUNC_12 (struct mvpp2*,int ) ;

void FUNC_13(struct mvpp2_port *VAR_8)
{
 unsigned int VAR_9 = FUNC_1(VAR_8->id);
 struct mvpp2 *VAR_10 = VAR_8->priv;
 unsigned int VAR_11, VAR_12;
 struct mvpp2_prs_entry VAR_13;

 if (VAR_10->prs_shadow[VAR_9].valid)
  return;

 FUNC_2(&VAR_13, 0, sizeof(VAR_13));

 VAR_13.index = VAR_9;

 VAR_11 = FUNC_12(VAR_10, FUNC_0(VAR_8->id));
 if (VAR_11 & VAR_0)
  VAR_12 = VAR_6;
 else
  VAR_12 = VAR_7;

 FUNC_9(&VAR_13, VAR_2);


 FUNC_10(&VAR_13, 0);


 FUNC_11(&VAR_13, VAR_8->id, 1);


 FUNC_6(&VAR_13, VAR_1);


 FUNC_8(&VAR_13, VAR_12, VAR_5);


 FUNC_7(&VAR_13, VAR_3,
     VAR_3);


 FUNC_5(&VAR_13, 0, VAR_4);


 FUNC_4(VAR_10, VAR_13.index, VAR_2);
 FUNC_3(VAR_10, &VAR_13);
}
