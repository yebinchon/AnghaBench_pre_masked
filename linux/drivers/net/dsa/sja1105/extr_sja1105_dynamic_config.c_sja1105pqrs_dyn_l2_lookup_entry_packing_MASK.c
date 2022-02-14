
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sja1105_l2_lookup_entry {int lockeds; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int,int const,int) ;
 size_t FUNC_1 (void*,void*,int) ;

__attribute__((used)) static size_t
FUNC_2(void *VAR_2, void *VAR_3,
     enum packing_op VAR_4)
{
 struct sja1105_l2_lookup_entry *VAR_5 = VAR_3;
 u8 *VAR_6 = VAR_2 + VAR_0;
 const int VAR_7 = VAR_1;

 FUNC_0(VAR_6, &VAR_5->lockeds, 28, 28, VAR_7, VAR_4);

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
