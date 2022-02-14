
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_sfp_eeprom {int * extd; int * base; } ;
struct xgbe_sfp_ascii {int dummy; } ;
struct xgbe_prv_data {int netdev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int *,size_t) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_9,
         struct xgbe_sfp_eeprom *VAR_10)
{
 struct xgbe_sfp_ascii VAR_11;
 char *VAR_12 = (char *)&VAR_11;

 FUNC_1(VAR_9, VAR_8, VAR_9->netdev, "SFP detected:\n");
 FUNC_0(VAR_12, &VAR_10->base[VAR_0],
        VAR_1);
 VAR_12[VAR_1] = '\0';
 FUNC_1(VAR_9, VAR_8, VAR_9->netdev, "  vendor:         %s\n",
    VAR_12);

 FUNC_0(VAR_12, &VAR_10->base[VAR_2],
        VAR_3);
 VAR_12[VAR_3] = '\0';
 FUNC_1(VAR_9, VAR_8, VAR_9->netdev, "  part number:    %s\n",
    VAR_12);

 FUNC_0(VAR_12, &VAR_10->base[VAR_4],
        VAR_5);
 VAR_12[VAR_5] = '\0';
 FUNC_1(VAR_9, VAR_8, VAR_9->netdev, "  revision level: %s\n",
    VAR_12);

 FUNC_0(VAR_12, &VAR_10->extd[VAR_6],
        VAR_7);
 VAR_12[VAR_7] = '\0';
 FUNC_1(VAR_9, VAR_8, VAR_9->netdev, "  serial number:  %s\n",
    VAR_12);
}
