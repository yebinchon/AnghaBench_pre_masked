
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_rss_table {int dummy; } ;
struct mvpp2 {struct mvpp2_rss_table** rss_tables; } ;


 int VAR_0 ;

__attribute__((used)) static struct mvpp2_rss_table *FUNC_0(struct mvpp2 *VAR_1,
          int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return ((void*)0);

 return VAR_1->rss_tables[VAR_2];
}
