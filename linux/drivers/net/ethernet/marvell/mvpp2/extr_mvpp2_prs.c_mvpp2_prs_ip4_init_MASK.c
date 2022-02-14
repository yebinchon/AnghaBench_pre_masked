
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int index; } ;
struct mvpp2 {int dummy; } ;
struct iphdr {int dummy; } ;
typedef int pe ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,int ) ;
 int FUNC_3 (struct mvpp2*,int ,int,int) ;
 int FUNC_4 (struct mvpp2*,int ,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ,int,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_12 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_13 (struct mvpp2_prs_entry*,int ) ;

__attribute__((used)) static int FUNC_14(struct mvpp2 *VAR_25)
{
 struct mvpp2_prs_entry VAR_26;
 int VAR_27;


 VAR_27 = FUNC_3(VAR_25, VAR_1, VAR_17,
      VAR_16);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_3(VAR_25, VAR_2, VAR_18,
      VAR_16);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_3(VAR_25, VAR_0,
      VAR_12 |
      VAR_20,
      VAR_11 |
      VAR_19);
 if (VAR_27)
  return VAR_27;


 VAR_27 = FUNC_2(VAR_25, VAR_6);
 if (VAR_27)
  return VAR_27;


 VAR_27 = FUNC_2(VAR_25, VAR_7);
 if (VAR_27)
  return VAR_27;


 FUNC_0(&VAR_26, 0, sizeof(VAR_26));
 FUNC_12(&VAR_26, VAR_9);
 VAR_26.index = VAR_4;


 FUNC_7(&VAR_26, VAR_9);
 FUNC_10(&VAR_26, 12, VAR_22);

 FUNC_8(&VAR_26, VAR_24,
      sizeof(struct iphdr) - 4,
      VAR_23);
 FUNC_5(&VAR_26, VAR_5,
     VAR_5);
 FUNC_9(&VAR_26, VAR_15,
     VAR_16);

 FUNC_11(&VAR_26, 0, VAR_5);

 FUNC_13(&VAR_26, VAR_10);


 FUNC_4(VAR_25, VAR_26.index, VAR_9);
 FUNC_1(VAR_25, &VAR_26);


 FUNC_0(&VAR_26, 0, sizeof(VAR_26));
 FUNC_12(&VAR_26, VAR_9);
 VAR_26.index = VAR_3;


 FUNC_7(&VAR_26, VAR_8);
 FUNC_6(&VAR_26, VAR_21, 1);
 FUNC_9(&VAR_26, VAR_14,
     VAR_13);

 FUNC_11(&VAR_26, VAR_5,
     VAR_5);

 FUNC_13(&VAR_26, VAR_10);


 FUNC_4(VAR_25, VAR_26.index, VAR_9);
 FUNC_1(VAR_25, &VAR_26);

 return 0;
}
