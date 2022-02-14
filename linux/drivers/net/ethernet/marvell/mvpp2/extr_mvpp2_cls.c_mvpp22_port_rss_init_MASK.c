
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_rss_table {int * indir; } ;
struct mvpp2_port {int* rss_ctx; int nrxqs; int priv; } ;


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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct mvpp2_port*,int*) ;
 int FUNC_2 (struct mvpp2_port*,int ) ;
 int FUNC_3 (struct mvpp2_port*,struct mvpp2_rss_table*,int ) ;
 struct mvpp2_rss_table* FUNC_4 (int ,int) ;
 int FUNC_5 (struct mvpp2_port*,int ,int ) ;

int FUNC_6(struct mvpp2_port *VAR_13)
{
 struct mvpp2_rss_table *VAR_14;
 u32 VAR_15 = 0;
 int VAR_16, VAR_17;

 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++)
  VAR_13->rss_ctx[VAR_16] = -1;

 VAR_17 = FUNC_1(VAR_13, &VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_14 = FUNC_4(VAR_13->priv, VAR_15);
 if (!VAR_14)
  return -VAR_0;

 VAR_13->rss_ctx[0] = VAR_15;




 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++)
  VAR_14->indir[VAR_16] = FUNC_0(VAR_16, VAR_13->nrxqs);

 FUNC_3(VAR_13, VAR_14, FUNC_2(VAR_13, 0));


 FUNC_5(VAR_13, VAR_5, VAR_1);
 FUNC_5(VAR_13, VAR_6, VAR_3);
 FUNC_5(VAR_13, VAR_7, VAR_2);
 FUNC_5(VAR_13, VAR_8, VAR_4);
 FUNC_5(VAR_13, VAR_9, VAR_2);
 FUNC_5(VAR_13, VAR_10, VAR_4);

 return 0;
}
