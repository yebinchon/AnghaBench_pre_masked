
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ena_stats {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ena_stats* VAR_2 ;
 int FUNC_0 (int *,int ,char*,char*) ;

__attribute__((used)) static void FUNC_1(u8 **VAR_3)
{
 const struct ena_stats *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_2[VAR_5];

  FUNC_0(*VAR_3, VAR_1,
    "ena_admin_q_%s", VAR_4->name);
  (*VAR_3) += VAR_1;
 }
}
