
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_rss_table {int * indir; } ;
struct mvpp2_port {struct mvpp2* priv; } ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mvpp2_port*,int ) ;
 int FUNC_3 (struct mvpp2*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_3,
      struct mvpp2_rss_table *VAR_4,
      u32 VAR_5)
{
 struct mvpp2 *VAR_6 = VAR_3->priv;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  u32 VAR_8 = FUNC_0(VAR_5) |
     FUNC_1(VAR_7);
  FUNC_3(VAR_6, VAR_0, VAR_8);

  FUNC_3(VAR_6, VAR_2,
       FUNC_2(VAR_3, VAR_4->indir[VAR_7]));
 }
}
