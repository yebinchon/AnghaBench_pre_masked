
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int index; } ;
struct mvpp2 {int dummy; } ;
typedef int pe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,int ,int) ;
 int FUNC_3 (struct mvpp2*,int ,int ,int) ;
 int FUNC_4 (struct mvpp2*,int ,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int ) ;

__attribute__((used)) static void FUNC_10(struct mvpp2 *VAR_8)
{
 struct mvpp2_prs_entry VAR_9;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));


 VAR_9.index = VAR_0;
 FUNC_8(&VAR_9, VAR_4);

 FUNC_7(&VAR_9, VAR_6,
     VAR_6);
 FUNC_5(&VAR_9, VAR_7, 1);
 FUNC_6(&VAR_9, VAR_3);


 FUNC_9(&VAR_9, VAR_5);


 FUNC_4(VAR_8, VAR_9.index, VAR_4);
 FUNC_1(VAR_8, &VAR_9);


 FUNC_2(VAR_8, 0, 0);
 FUNC_3(VAR_8, 0, VAR_2, 0);
 FUNC_3(VAR_8, 0, VAR_1, 0);
}
