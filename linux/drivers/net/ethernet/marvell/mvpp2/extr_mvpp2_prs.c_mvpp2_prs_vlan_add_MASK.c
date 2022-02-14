
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_prs_entry {int index; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
typedef int pe ;
struct TYPE_2__ {scalar_t__ lu; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int ,unsigned short) ;
 int FUNC_4 (struct mvpp2*,int,scalar_t__) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ) ;
 unsigned int FUNC_7 (struct mvpp2_prs_entry*) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ,unsigned int) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_10 (struct mvpp2*,int,int) ;
 int FUNC_11 (struct mvpp2_prs_entry*,scalar_t__) ;
 int FUNC_12 (struct mvpp2_prs_entry*,unsigned int) ;
 int FUNC_13 (struct mvpp2*,unsigned short,int) ;

__attribute__((used)) static int FUNC_14(struct mvpp2 *VAR_12, unsigned short VAR_13, int VAR_14,
         unsigned int VAR_15)
{
 struct mvpp2_prs_entry VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = 0;

 FUNC_0(&VAR_16, 0, sizeof(VAR_16));

 VAR_18 = FUNC_13(VAR_12, VAR_13, VAR_14);

 if (VAR_18 < 0) {

  VAR_18 = FUNC_10(VAR_12, VAR_2,
      VAR_1);
  if (VAR_18 < 0)
   return VAR_18;


  for (VAR_17 = VAR_2;
       VAR_17 >= VAR_1; VAR_17--) {
   unsigned int VAR_20;

   if (!VAR_12->prs_shadow[VAR_17].valid ||
       VAR_12->prs_shadow[VAR_17].lu != VAR_5)
    continue;

   FUNC_2(VAR_12, &VAR_16, VAR_17);
   VAR_20 = FUNC_7(&VAR_16);
   if ((VAR_20 & VAR_7) ==
       VAR_6)
    break;
  }

  if (VAR_18 <= VAR_17)
   return -VAR_0;

  FUNC_0(&VAR_16, 0, sizeof(VAR_16));
  VAR_16.index = VAR_18;
  FUNC_11(&VAR_16, VAR_5);

  FUNC_3(&VAR_16, 0, VAR_13);


  FUNC_6(&VAR_16, VAR_4);


  FUNC_5(&VAR_16, 0, VAR_11);

  if (VAR_14 == VAR_10) {
   FUNC_8(&VAR_16, VAR_8,
       VAR_7);
  } else {
   VAR_14 |= VAR_3;
   FUNC_8(&VAR_16, VAR_9,
       VAR_7);
  }
  FUNC_9(&VAR_16, VAR_14, VAR_11);

  FUNC_4(VAR_12, VAR_16.index, VAR_5);
 } else {
  FUNC_2(VAR_12, &VAR_16, VAR_18);
 }

 FUNC_12(&VAR_16, VAR_15);

 FUNC_1(VAR_12, &VAR_16);

 return VAR_19;
}
