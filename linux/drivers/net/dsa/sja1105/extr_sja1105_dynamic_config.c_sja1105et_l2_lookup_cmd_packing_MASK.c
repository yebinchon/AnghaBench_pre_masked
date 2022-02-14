
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct sja1105_dyn_cmd {int index; int valident; int errors; int rdwrset; int valid; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *,int,int,int const,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2, struct sja1105_dyn_cmd *VAR_3,
    enum packing_op VAR_4)
{
 u8 *VAR_5 = VAR_2 + VAR_0;
 const int VAR_6 = VAR_1;

 FUNC_0(VAR_5, &VAR_3->valid, 31, 31, VAR_6, VAR_4);
 FUNC_0(VAR_5, &VAR_3->rdwrset, 30, 30, VAR_6, VAR_4);
 FUNC_0(VAR_5, &VAR_3->errors, 29, 29, VAR_6, VAR_4);
 FUNC_0(VAR_5, &VAR_3->valident, 27, 27, VAR_6, VAR_4);

 FUNC_0(VAR_2, &VAR_3->index, 29, 20,
   VAR_0, VAR_4);
}
