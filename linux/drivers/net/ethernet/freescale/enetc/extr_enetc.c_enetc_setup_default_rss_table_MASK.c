
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_si {int num_rss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct enetc_si*,int*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct enetc_si *VAR_2, int VAR_3)
{
 int *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2->num_rss, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_2->num_rss; VAR_5++)
  VAR_4[VAR_5] = VAR_5 % VAR_3;

 FUNC_0(VAR_2, VAR_4, VAR_2->num_rss);

 FUNC_1(VAR_4);

 return 0;
}
