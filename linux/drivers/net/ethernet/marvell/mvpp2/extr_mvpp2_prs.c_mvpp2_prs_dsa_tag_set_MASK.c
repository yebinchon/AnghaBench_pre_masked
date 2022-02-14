
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_prs_entry {int index; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
typedef int pe ;
struct TYPE_2__ {scalar_t__ valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_3 (struct mvpp2*,int,int ) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ,int ,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int,int) ;

__attribute__((used)) static void FUNC_12(struct mvpp2 *VAR_13, int VAR_14, bool VAR_15,
      bool VAR_16, bool VAR_17)
{
 struct mvpp2_prs_entry VAR_18;
 int VAR_19, VAR_20;

 if (VAR_17) {
  VAR_19 = VAR_16 ? VAR_2 : VAR_3;
  VAR_20 = 8;
 } else {
  VAR_19 = VAR_16 ? VAR_0 : VAR_1;
  VAR_20 = 4;
 }

 if (VAR_13->prs_shadow[VAR_19].valid) {

  FUNC_2(VAR_13, &VAR_18, VAR_19);
 } else {

  FUNC_0(&VAR_18, 0, sizeof(VAR_18));
  FUNC_9(&VAR_18, VAR_4);
  VAR_18.index = VAR_19;


  FUNC_3(VAR_13, VAR_18.index, VAR_4);

  if (VAR_16) {

   FUNC_8(&VAR_18, 0,
          VAR_12,
          VAR_12);


   if (VAR_17)
    FUNC_4(&VAR_18, 1,
       VAR_10);
   else
    FUNC_4(&VAR_18, 0,
       VAR_10);


   FUNC_6(&VAR_18, VAR_9,
       VAR_7);

   FUNC_5(&VAR_18, VAR_6);
  } else {

   FUNC_7(&VAR_18, VAR_20,
     VAR_11);


   FUNC_6(&VAR_18, VAR_8,
       VAR_7);
   FUNC_5(&VAR_18, VAR_5);
  }


  FUNC_10(&VAR_18, 0);
 }


 FUNC_11(&VAR_18, VAR_14, VAR_15);

 FUNC_1(VAR_13, &VAR_18);
}
