
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int index; } ;
struct mvpp2 {int dummy; } ;
struct ipv6hdr {int dummy; } ;
typedef int pe ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
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
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,int,int ) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ,int,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,unsigned int,unsigned int) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ,unsigned short,int ) ;
 int FUNC_9 (struct mvpp2*,int ,int ) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int ) ;

__attribute__((used)) static int FUNC_12(struct mvpp2 *VAR_15, unsigned short VAR_16,
          unsigned int VAR_17, unsigned int VAR_18)
{
 struct mvpp2_prs_entry VAR_19;
 int VAR_20;

 if ((VAR_16 != VAR_3) && (VAR_16 != VAR_4) &&
     (VAR_16 != VAR_1) && (VAR_16 != VAR_2))
  return -VAR_0;

 VAR_20 = FUNC_9(VAR_15, VAR_5,
     VAR_6);
 if (VAR_20 < 0)
  return VAR_20;

 FUNC_0(&VAR_19, 0, sizeof(VAR_19));
 FUNC_10(&VAR_19, VAR_9);
 VAR_19.index = VAR_20;


 FUNC_4(&VAR_19, VAR_8);
 FUNC_3(&VAR_19, VAR_11, 1);
 FUNC_6(&VAR_19, VAR_17, VAR_18);
 FUNC_5(&VAR_19, VAR_13,
      sizeof(struct ipv6hdr) - 6,
      VAR_12);

 FUNC_8(&VAR_19, 0, VAR_16, VAR_14);
 FUNC_7(&VAR_19, VAR_7,
     VAR_7);

 FUNC_11(&VAR_19, VAR_10);


 FUNC_2(VAR_15, VAR_19.index, VAR_9);
 FUNC_1(VAR_15, &VAR_19);

 return 0;
}
