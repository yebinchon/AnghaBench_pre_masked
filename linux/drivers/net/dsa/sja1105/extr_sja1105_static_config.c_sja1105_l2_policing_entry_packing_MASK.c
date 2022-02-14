
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_l2_policing_entry {int partition; int maxlen; int rate; int smax; int sharindx; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, void *VAR_2,
      enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_l2_policing_entry *VAR_5 = VAR_2;

 FUNC_0(VAR_1, &VAR_5->sharindx, 63, 58, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->smax, 57, 42, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->rate, 41, 26, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->maxlen, 25, 15, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->partition, 14, 12, VAR_4, VAR_3);
 return VAR_4;
}
