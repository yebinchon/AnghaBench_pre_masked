
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_prs_entry {int index; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
typedef int pe ;
typedef enum mvpp2_prs_l2_cast { ____Placeholder_mvpp2_prs_l2_cast } mvpp2_prs_l2_cast ;
struct TYPE_2__ {scalar_t__ valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_3 (struct mvpp2*,int,int ) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,unsigned int,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ,unsigned char,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int,int) ;

void FUNC_11(struct mvpp2 *VAR_13, int VAR_14,
          enum mvpp2_prs_l2_cast VAR_15, bool VAR_16)
{
 struct mvpp2_prs_entry VAR_17;
 unsigned char VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 if (VAR_15 == VAR_4) {
  VAR_18 = VAR_12;
  VAR_20 = VAR_2;
  VAR_19 = VAR_10;
 } else {
  VAR_18 = VAR_7;
  VAR_20 = VAR_1;
  VAR_19 = VAR_9;
 }


 if (VAR_13->prs_shadow[VAR_20].valid) {
  FUNC_2(VAR_13, &VAR_17, VAR_20);
 } else {
  FUNC_0(&VAR_17, 0, sizeof(VAR_17));
  FUNC_8(&VAR_17, VAR_6);
  VAR_17.index = VAR_20;


  FUNC_4(&VAR_17, VAR_5);


  FUNC_5(&VAR_17, VAR_19, VAR_8);


  FUNC_7(&VAR_17, 0, VAR_18,
          VAR_3);


  FUNC_6(&VAR_17, 2 * VAR_0,
      VAR_11);


  FUNC_9(&VAR_17, 0);


  FUNC_3(VAR_13, VAR_17.index, VAR_6);
 }


 FUNC_10(&VAR_17, VAR_14, VAR_16);

 FUNC_1(VAR_13, &VAR_17);
}
