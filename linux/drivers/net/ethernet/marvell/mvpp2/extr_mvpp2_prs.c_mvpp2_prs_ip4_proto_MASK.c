
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int index; int* sram; } ;
struct mvpp2 {int dummy; } ;
struct iphdr {int dummy; } ;
typedef int pe ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,int,int ) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ,int,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,unsigned int,unsigned int) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int,int,int) ;
 int FUNC_10 (struct mvpp2*,int ,int ) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_12 (struct mvpp2_prs_entry*,int ) ;

__attribute__((used)) static int FUNC_13(struct mvpp2 *VAR_18, unsigned short VAR_19,
          unsigned int VAR_20, unsigned int VAR_21)
{
 struct mvpp2_prs_entry VAR_22;
 int VAR_23;

 if ((VAR_19 != VAR_2) && (VAR_19 != VAR_3) &&
     (VAR_19 != VAR_1))
  return -VAR_0;


 VAR_23 = FUNC_10(VAR_18, VAR_4,
     VAR_5);
 if (VAR_23 < 0)
  return VAR_23;

 FUNC_0(&VAR_22, 0, sizeof(VAR_22));
 FUNC_11(&VAR_22, VAR_7);
 VAR_22.index = VAR_23;


 FUNC_4(&VAR_22, VAR_7);
 FUNC_7(&VAR_22, 12, VAR_11);

 FUNC_5(&VAR_22, VAR_15,
      sizeof(struct iphdr) - 4,
      VAR_12);
 FUNC_3(&VAR_22, VAR_6,
     VAR_6);
 FUNC_6(&VAR_22, VAR_20, VAR_21 | VAR_9);

 FUNC_9(&VAR_22, 2, 0x00,
         VAR_17);
 FUNC_9(&VAR_22, 3, 0x00,
         VAR_16);

 FUNC_9(&VAR_22, 5, VAR_19, VAR_16);
 FUNC_8(&VAR_22, 0, VAR_6);

 FUNC_12(&VAR_22, VAR_8);


 FUNC_2(VAR_18, VAR_22.index, VAR_7);
 FUNC_1(VAR_18, &VAR_22);


 VAR_23 = FUNC_10(VAR_18, VAR_4,
     VAR_5);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_22.index = VAR_23;

 VAR_22.sram[VAR_14] = 0x0;
 VAR_22.sram[VAR_13] = 0x0;
 FUNC_6(&VAR_22, VAR_20, VAR_21);

 FUNC_6(&VAR_22, VAR_20 | VAR_10,
     VAR_21 | VAR_9);

 FUNC_9(&VAR_22, 2, 0x00, 0x0);
 FUNC_9(&VAR_22, 3, 0x00, 0x0);


 FUNC_2(VAR_18, VAR_22.index, VAR_7);
 FUNC_1(VAR_18, &VAR_22);

 return 0;
}
