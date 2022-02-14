
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mvpp2_prs_entry {int index; } ;
struct mvpp2_port {unsigned int id; struct mvpp2* priv; } ;
struct mvpp2 {int dummy; } ;
typedef int pe ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_3 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_5 (struct mvpp2*,int,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,unsigned int,int ) ;
 int FUNC_9 (struct mvpp2*,unsigned int,scalar_t__) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_12 (struct mvpp2_prs_entry*,unsigned int,int) ;
 int FUNC_13 (struct mvpp2_port*,int ,unsigned int) ;
 unsigned int FUNC_14 (struct mvpp2*,int ) ;

int FUNC_15(struct mvpp2_port *VAR_11, u16 VAR_12)
{
 unsigned int VAR_13 = VAR_1 +
     VAR_11->id * VAR_7;
 unsigned int VAR_14 = 0xfff, VAR_15, VAR_16;
 struct mvpp2 *VAR_17 = VAR_11->priv;
 struct mvpp2_prs_entry VAR_18;
 int VAR_19;

 FUNC_1(&VAR_18, 0, sizeof(VAR_18));


 VAR_19 = FUNC_13(VAR_11, VAR_12, VAR_14);

 VAR_15 = FUNC_14(VAR_17, FUNC_0(VAR_11->id));
 if (VAR_15 & VAR_0)
  VAR_16 = VAR_9;
 else
  VAR_16 = VAR_10;


 if (VAR_19 < 0) {


  VAR_19 = FUNC_9(VAR_17, VAR_13,
      VAR_13 +
      VAR_8);


  if (VAR_19 < 0)
   return VAR_19;

  FUNC_10(&VAR_18, VAR_3);
  VAR_18.index = VAR_19;


  FUNC_11(&VAR_18, 0);
 } else {
  FUNC_3(VAR_17, &VAR_18, VAR_19);
 }


 FUNC_12(&VAR_18, VAR_11->id, 1);


 FUNC_7(&VAR_18, VAR_2);


 FUNC_8(&VAR_18, VAR_16, VAR_5);


 FUNC_4(&VAR_18, VAR_6, VAR_12);


 FUNC_6(&VAR_18, 0, VAR_4);


 FUNC_5(VAR_17, VAR_18.index, VAR_3);
 FUNC_2(VAR_17, &VAR_18);

 return 0;
}
