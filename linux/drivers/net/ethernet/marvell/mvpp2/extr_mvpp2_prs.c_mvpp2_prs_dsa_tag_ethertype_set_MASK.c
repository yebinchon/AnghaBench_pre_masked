
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
 scalar_t__ VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_4 (struct mvpp2*,int,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,scalar_t__,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,scalar_t__,int ,int ) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int) ;
 int FUNC_12 (struct mvpp2_prs_entry*,int,int) ;

__attribute__((used)) static void FUNC_13(struct mvpp2 *VAR_16, int VAR_17,
         bool VAR_18, bool VAR_19, bool VAR_20)
{
 struct mvpp2_prs_entry VAR_21;
 int VAR_22, VAR_23, VAR_24;

 if (VAR_20) {
  VAR_22 = VAR_19 ? VAR_4 :
        VAR_5;
  VAR_24 = 0;
  VAR_23 = 8;
 } else {
  VAR_22 = VAR_19 ? VAR_2 :
        VAR_3;
  VAR_24 = VAR_9;
  VAR_23 = 4;
 }

 if (VAR_16->prs_shadow[VAR_22].valid) {

  FUNC_2(VAR_16, &VAR_21, VAR_22);
 } else {

  FUNC_0(&VAR_21, 0, sizeof(VAR_21));
  FUNC_10(&VAR_21, VAR_6);
  VAR_21.index = VAR_22;


  FUNC_3(&VAR_21, 0, VAR_0);
  FUNC_3(&VAR_21, 2, 0);

  FUNC_7(&VAR_21, VAR_10,
      VAR_10);

  FUNC_8(&VAR_21, 2 + VAR_1 + VAR_23,
      VAR_14);


  FUNC_4(VAR_16, VAR_21.index, VAR_6);

  if (VAR_19) {

   FUNC_9(&VAR_21,
           VAR_1 + 2 + 3,
       VAR_15,
       VAR_15);

   FUNC_5(&VAR_21, 0,
       VAR_13);

   FUNC_6(&VAR_21, VAR_8);
  } else {

   FUNC_7(&VAR_21, VAR_12,
       VAR_11);
   FUNC_6(&VAR_21, VAR_7);
  }

  FUNC_11(&VAR_21, VAR_24);
 }


 FUNC_12(&VAR_21, VAR_17, VAR_18);

 FUNC_1(VAR_16, &VAR_21);
}
