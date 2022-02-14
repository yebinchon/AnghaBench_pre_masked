
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_schedule_entry {int delta; int vlindex; int resmedia; int resmedia_en; int txen; int setvalid; int destports; int winst; int winend; int winstindex; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int *,int,int,size_t const,int) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, void *VAR_2,
          enum packing_op VAR_3)
{
 const size_t VAR_4 = VAR_0;
 struct sja1105_schedule_entry *VAR_5 = VAR_2;

 FUNC_0(VAR_1, &VAR_5->winstindex, 63, 54, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->winend, 53, 53, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->winst, 52, 52, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->destports, 51, 47, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->setvalid, 46, 46, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->txen, 45, 45, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->resmedia_en, 44, 44, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->resmedia, 43, 36, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->vlindex, 35, 26, VAR_4, VAR_3);
 FUNC_0(VAR_1, &VAR_5->delta, 25, 8, VAR_4, VAR_3);
 return VAR_4;
}
