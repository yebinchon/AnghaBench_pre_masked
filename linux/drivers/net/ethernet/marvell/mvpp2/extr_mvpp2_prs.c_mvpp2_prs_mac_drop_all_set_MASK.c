
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_prs_entry {size_t index; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
typedef int pe ;
struct TYPE_2__ {scalar_t__ valid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_prs_entry*,size_t) ;
 int FUNC_3 (struct mvpp2*,size_t,int ) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int,int) ;

__attribute__((used)) static void FUNC_10(struct mvpp2 *VAR_5, int VAR_6, bool VAR_7)
{
 struct mvpp2_prs_entry VAR_8;

 if (VAR_5->prs_shadow[VAR_0].valid) {

  FUNC_2(VAR_5, &VAR_8, VAR_0);
 } else {

  FUNC_0(&VAR_8, 0, sizeof(VAR_8));
  FUNC_7(&VAR_8, VAR_2);
  VAR_8.index = VAR_0;


  FUNC_6(&VAR_8, VAR_3,
      VAR_3);

  FUNC_4(&VAR_8, VAR_4, 1);
  FUNC_5(&VAR_8, VAR_1);


  FUNC_3(VAR_5, VAR_8.index, VAR_2);


  FUNC_8(&VAR_8, 0);
 }


 FUNC_9(&VAR_8, VAR_6, VAR_7);

 FUNC_1(VAR_5, &VAR_8);
}
