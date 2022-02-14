
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int min_volt; unsigned int max_volt; unsigned int max_curr; unsigned int out_volt; unsigned int op_curr; } ;
struct tcpm_port {unsigned int nr_source_caps; unsigned int nr_snk_pdo; TYPE_1__ pps_data; int * snk_pdo; int * source_caps; } ;


 int VAR_0 ;

 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 void* FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct tcpm_port*,char*) ;

__attribute__((used)) static unsigned int FUNC_9(struct tcpm_port *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4 = 0, VAR_5 = 0;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned int VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 unsigned int VAR_16 = 0, VAR_17 = 0;






 for (VAR_2 = 1; VAR_2 < VAR_1->nr_source_caps; ++VAR_2) {
  VAR_13 = VAR_1->source_caps[VAR_2];

  switch (FUNC_7(VAR_13)) {
  case 128:
   if (FUNC_3(VAR_13) != VAR_0) {
    FUNC_8(VAR_1, "Not PPS APDO (source), ignoring");
    continue;
   }

   VAR_6 = FUNC_6(VAR_13);
   VAR_7 = FUNC_5(VAR_13);
   VAR_8 = FUNC_4(VAR_13);
   VAR_9 = (VAR_8 * VAR_7) / 1000;






   for (VAR_3 = 1; VAR_3 < VAR_1->nr_snk_pdo; VAR_3++) {
    VAR_13 = VAR_1->snk_pdo[VAR_3];

    switch (FUNC_7(VAR_13)) {
    case 128:
     if (FUNC_3(VAR_13) != VAR_0) {
      FUNC_8(VAR_1,
        "Not PPS APDO (sink), ignoring");
      continue;
     }

     VAR_10 =
      FUNC_6(VAR_13);
     VAR_11 =
      FUNC_5(VAR_13);
     break;
    default:
     FUNC_8(VAR_1,
       "Not APDO type (sink), ignoring");
     continue;
    }

    if (VAR_6 <= VAR_11 &&
        VAR_7 >= VAR_10) {
     VAR_12 = FUNC_1(VAR_7, VAR_11);
     VAR_9 = (VAR_12 * VAR_8) / 1000;

     if ((VAR_9 == VAR_4 &&
          VAR_12 > VAR_5) ||
         VAR_9 > VAR_4) {
      VAR_16 = VAR_2;
      VAR_17 = VAR_3;
      VAR_4 = VAR_9;
      VAR_5 = VAR_12;
     }
    }
   }

   break;
  default:
   FUNC_8(VAR_1, "Not APDO type (source), ignoring");
   continue;
  }
 }

 if (VAR_16) {
  VAR_14 = VAR_1->source_caps[VAR_16];
  VAR_15 = VAR_1->snk_pdo[VAR_17];

  VAR_1->pps_data.min_volt = FUNC_0(FUNC_6(VAR_14),
           FUNC_6(VAR_15));
  VAR_1->pps_data.max_volt = FUNC_1(FUNC_5(VAR_14),
           FUNC_5(VAR_15));
  VAR_1->pps_data.max_curr = FUNC_2(VAR_14, VAR_15);
  VAR_1->pps_data.out_volt = FUNC_1(VAR_1->pps_data.max_volt,
           FUNC_0(VAR_1->pps_data.min_volt,
        VAR_1->pps_data.out_volt));
  VAR_1->pps_data.op_curr = FUNC_1(VAR_1->pps_data.max_curr,
          VAR_1->pps_data.op_curr);
 }

 return VAR_16;
}
