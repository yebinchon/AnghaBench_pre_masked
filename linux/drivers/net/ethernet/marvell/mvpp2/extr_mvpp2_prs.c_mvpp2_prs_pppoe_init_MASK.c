
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int index; int* sram; } ;
struct mvpp2 {int dummy; } ;
typedef int pe ;


 scalar_t__ VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_3 (struct mvpp2*,int,int ) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ,scalar_t__,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,scalar_t__,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,scalar_t__,int,int) ;
 int FUNC_10 (struct mvpp2*,int ,int ) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int ) ;

__attribute__((used)) static int FUNC_12(struct mvpp2 *VAR_24)
{
 struct mvpp2_prs_entry VAR_25;
 int VAR_26;


 VAR_26 = FUNC_10(VAR_24, VAR_1,
     VAR_2);
 if (VAR_26 < 0)
  return VAR_26;

 FUNC_0(&VAR_25, 0, sizeof(VAR_25));
 FUNC_11(&VAR_25, VAR_10);
 VAR_25.index = VAR_26;

 FUNC_2(&VAR_25, 0, VAR_22);

 FUNC_5(&VAR_25, VAR_8);
 FUNC_7(&VAR_25, VAR_12,
     VAR_14);

 FUNC_8(&VAR_25, VAR_0 + 4,
     VAR_17);

 FUNC_6(&VAR_25, VAR_21,
      VAR_0,
      VAR_18);


 FUNC_3(VAR_24, VAR_25.index, VAR_10);
 FUNC_1(VAR_24, &VAR_25);


 VAR_26 = FUNC_10(VAR_24, VAR_1,
     VAR_2);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_25.index = VAR_26;

 FUNC_9(&VAR_25, VAR_0,
         VAR_3 | VAR_5,
         VAR_4 |
         VAR_6);


 VAR_25.sram[VAR_20] = 0x0;
 VAR_25.sram[VAR_19] = 0x0;
 FUNC_7(&VAR_25, VAR_11,
     VAR_14);


 FUNC_3(VAR_24, VAR_25.index, VAR_10);
 FUNC_1(VAR_24, &VAR_25);


 VAR_26 = FUNC_10(VAR_24, VAR_1,
     VAR_2);
 if (VAR_26 < 0)
  return VAR_26;

 FUNC_0(&VAR_25, 0, sizeof(VAR_25));
 FUNC_11(&VAR_25, VAR_10);
 VAR_25.index = VAR_26;

 FUNC_2(&VAR_25, 0, VAR_23);

 FUNC_5(&VAR_25, VAR_9);
 FUNC_7(&VAR_25, VAR_13,
     VAR_14);

 FUNC_8(&VAR_25, VAR_0 + 4,
     VAR_17);

 FUNC_6(&VAR_25, VAR_21,
      VAR_0,
      VAR_18);


 FUNC_3(VAR_24, VAR_25.index, VAR_10);
 FUNC_1(VAR_24, &VAR_25);


 VAR_26 = FUNC_10(VAR_24, VAR_1,
     VAR_2);
 if (VAR_26 < 0)
  return VAR_26;

 FUNC_0(&VAR_25, 0, sizeof(VAR_25));
 FUNC_11(&VAR_25, VAR_10);
 VAR_25.index = VAR_26;

 FUNC_7(&VAR_25, VAR_15,
     VAR_14);


 FUNC_5(&VAR_25, VAR_7);
 FUNC_4(&VAR_25, VAR_16, 1);

 FUNC_6(&VAR_25, VAR_21,
      VAR_0,
      VAR_18);


 FUNC_3(VAR_24, VAR_25.index, VAR_10);
 FUNC_1(VAR_24, &VAR_25);

 return 0;
}
