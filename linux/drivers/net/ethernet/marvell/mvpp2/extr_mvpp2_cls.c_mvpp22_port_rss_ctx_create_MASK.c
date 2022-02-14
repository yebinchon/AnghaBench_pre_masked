
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {scalar_t__* rss_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvpp2_port*,int*) ;

int FUNC_1(struct mvpp2_port *VAR_2, u32 *VAR_3)
{
 u32 VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;




 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_2->rss_ctx[VAR_6] < 0)
   break;
 }

 if (VAR_6 == VAR_1)
  return -VAR_0;

 VAR_2->rss_ctx[VAR_6] = VAR_4;
 *VAR_3 = VAR_6;

 return 0;
}
