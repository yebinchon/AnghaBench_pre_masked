
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_prs_entry {int index; } ;
struct mvpp2 {int* prs_double_vlans; TYPE_1__* prs_shadow; } ;
typedef int pe ;
struct TYPE_2__ {scalar_t__ lu; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*) ;
 int FUNC_2 (struct mvpp2*,unsigned short,unsigned short) ;
 int FUNC_3 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_4 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int,unsigned short) ;
 int FUNC_6 (struct mvpp2*,int,scalar_t__) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,scalar_t__) ;
 unsigned int FUNC_9 (struct mvpp2_prs_entry*) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int ,unsigned int) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_12 (struct mvpp2*,int,int) ;
 int FUNC_13 (struct mvpp2_prs_entry*,scalar_t__) ;
 int FUNC_14 (struct mvpp2_prs_entry*,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct mvpp2 *VAR_12, unsigned short VAR_13,
         unsigned short VAR_14,
         unsigned int VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19 = 0;
 struct mvpp2_prs_entry VAR_20;

 FUNC_0(&VAR_20, 0, sizeof(VAR_20));

 VAR_17 = FUNC_2(VAR_12, VAR_13, VAR_14);

 if (VAR_17 < 0) {

  VAR_17 = FUNC_12(VAR_12, VAR_1,
    VAR_2);
  if (VAR_17 < 0)
   return VAR_17;


  VAR_18 = FUNC_1(VAR_12);
  if (VAR_18 < 0)
   return VAR_18;


  for (VAR_16 = VAR_1;
       VAR_16 <= VAR_2; VAR_16++) {
   unsigned int VAR_21;

   if (!VAR_12->prs_shadow[VAR_16].valid ||
       VAR_12->prs_shadow[VAR_16].lu != VAR_4)
    continue;

   FUNC_4(VAR_12, &VAR_20, VAR_16);
   VAR_21 = FUNC_9(&VAR_20);
   VAR_21 &= VAR_6;
   if (VAR_21 == VAR_7 ||
       VAR_21 == VAR_8)
    break;
  }

  if (VAR_17 >= VAR_16)
   return -VAR_0;

  FUNC_0(&VAR_20, 0, sizeof(VAR_20));
  FUNC_13(&VAR_20, VAR_4);
  VAR_20.index = VAR_17;

  VAR_12->prs_double_vlans[VAR_18] = 1;

  FUNC_5(&VAR_20, 0, VAR_13);
  FUNC_5(&VAR_20, 4, VAR_14);

  FUNC_8(&VAR_20, VAR_4);

  FUNC_11(&VAR_20, VAR_11,
      VAR_10);
  FUNC_10(&VAR_20, VAR_5,
      VAR_6);
  FUNC_7(&VAR_20, VAR_18 | VAR_3,
      VAR_9);

  FUNC_6(VAR_12, VAR_20.index, VAR_4);
 } else {
  FUNC_4(VAR_12, &VAR_20, VAR_17);
 }


 FUNC_14(&VAR_20, VAR_15);
 FUNC_3(VAR_12, &VAR_20);

 return VAR_19;
}
