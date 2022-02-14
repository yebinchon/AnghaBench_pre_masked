
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_table_header {int crc; int len; int block_id; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

size_t FUNC_1(void *VAR_1, void *VAR_2,
        enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_table_header *VAR_5 = VAR_2;

 FUNC_0(VAR_1, &VAR_5->block_id, 31, 24, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->len, 55, 32, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->crc, 95, 64, VAR_4, VAR_3);
 return VAR_4;
}
