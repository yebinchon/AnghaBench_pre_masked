
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
typedef int u64 ;
struct sja1105_dyn_cmd {int index; int valident; scalar_t__ search; int rdwrset; int errors; int valid; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*,int *,int,int,int const,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_7, struct sja1105_dyn_cmd *VAR_8,
      enum packing_op VAR_9)
{
 u8 *VAR_10 = VAR_7 + VAR_0;
 const int VAR_11 = VAR_5;
 u64 VAR_12;

 FUNC_0(VAR_10, &VAR_8->valid, 31, 31, VAR_11, VAR_9);
 FUNC_0(VAR_10, &VAR_8->rdwrset, 30, 30, VAR_11, VAR_9);
 FUNC_0(VAR_10, &VAR_8->errors, 29, 29, VAR_11, VAR_9);
 FUNC_0(VAR_10, &VAR_8->valident, 27, 27, VAR_11, VAR_9);
 if (VAR_8->rdwrset == VAR_6) {
  if (VAR_8->search)
   VAR_12 = VAR_3;
  else
   VAR_12 = VAR_2;
 } else {

  if (VAR_8->valident)
   VAR_12 = VAR_4;
  else
   VAR_12 = VAR_1;
 }
 FUNC_0(VAR_10, &VAR_12, 25, 23, VAR_11, VAR_9);
 FUNC_0(VAR_7, &VAR_8->index, 15, 6,
   VAR_0, VAR_9);
}
