
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_table_header {int crc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int *,int,int ,int) ;
 int FUNC_3 (void*,struct sja1105_table_header*,int ) ;

void
FUNC_4(void *VAR_2, struct sja1105_table_header *VAR_3)
{



 FUNC_0(VAR_2, 0, VAR_1);
 FUNC_3(VAR_2, VAR_3, VAR_0);
 VAR_3->crc = FUNC_1(VAR_2, VAR_1 - 4);
 FUNC_2(VAR_2 + VAR_1 - 4, &VAR_3->crc, 31, 0, 4);
}
