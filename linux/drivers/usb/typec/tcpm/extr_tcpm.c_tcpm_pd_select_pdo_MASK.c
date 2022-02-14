
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int supported; } ;
struct tcpm_port {unsigned int nr_source_caps; unsigned int nr_snk_pdo; int * snk_pdo; int usb_type; TYPE_1__ pps_data; int * source_caps; } ;
typedef enum pd_pdo_type { ____Placeholder_pd_pdo_type } pd_pdo_type ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct tcpm_port*,char*) ;

__attribute__((used)) static int FUNC_8(struct tcpm_port *VAR_4, int *VAR_5,
         int *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0,
       VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0,
       VAR_16 = 0;
 int VAR_17 = -VAR_1;

 VAR_4->pps_data.supported = 0;
 VAR_4->usb_type = VAR_2;





 for (VAR_7 = 0; VAR_7 < VAR_4->nr_source_caps; VAR_7++) {
  u32 VAR_18 = VAR_4->source_caps[VAR_7];
  enum pd_pdo_type VAR_19 = FUNC_6(VAR_18);

  switch (VAR_19) {
  case 129:
   VAR_9 = FUNC_1(VAR_18);
   VAR_10 = VAR_9;
   break;
  case 130:
  case 128:
   VAR_9 = FUNC_4(VAR_18);
   VAR_10 = FUNC_5(VAR_18);
   break;
  case 131:
   if (FUNC_0(VAR_18) == VAR_0) {
    VAR_4->pps_data.supported = 1;
    VAR_4->usb_type =
     VAR_3;
   }
   continue;
  default:
   FUNC_7(VAR_4, "Invalid source PDO type, ignoring");
   continue;
  }

  switch (VAR_19) {
  case 129:
  case 128:
   VAR_14 = FUNC_2(VAR_18);
   VAR_13 = VAR_14 * VAR_10 / 1000;
   break;
  case 130:
   VAR_13 = FUNC_3(VAR_18);
   break;
  case 131:
   continue;
  default:
   FUNC_7(VAR_4, "Invalid source PDO type, ignoring");
   continue;
  }

  for (VAR_8 = 0; VAR_8 < VAR_4->nr_snk_pdo; VAR_8++) {
   VAR_18 = VAR_4->snk_pdo[VAR_8];

   switch (FUNC_6(VAR_18)) {
   case 129:
    VAR_15 = FUNC_1(VAR_18);
    VAR_16 = VAR_15;
    break;
   case 130:
   case 128:
    VAR_15 = FUNC_4(VAR_18);
    VAR_16 = FUNC_5(VAR_18);
    break;
   case 131:
    continue;
   default:
    FUNC_7(VAR_4, "Invalid sink PDO type, ignoring");
    continue;
   }

   if (VAR_9 <= VAR_15 &&
    VAR_10 >= VAR_16) {

    if ((VAR_13 == VAR_11 && VAR_10 > VAR_12) ||
       VAR_13 > VAR_11) {
     *VAR_6 = VAR_7;
     *VAR_5 = VAR_8;
     VAR_11 = VAR_13;
     VAR_12 = VAR_10;
     VAR_17 = 0;
    }
   }
  }
 }

 return VAR_17;
}
