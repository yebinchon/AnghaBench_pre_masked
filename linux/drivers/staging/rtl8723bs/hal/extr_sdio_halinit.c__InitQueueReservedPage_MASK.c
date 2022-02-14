
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct registry_priv {int wifi_spec; } ;
struct hal_com_data {int OutEpQueueSel; } ;
struct adapter {struct registry_priv registrypriv; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct adapter*,int,int,int,int) ;
 int FUNC_6 (struct adapter*,int,int,int,int) ;
 int FUNC_7 (struct adapter*,int ,int) ;
 int FUNC_8 (struct adapter*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_13)
{
 struct hal_com_data *VAR_14 = FUNC_0(VAR_13);
 struct registry_priv *VAR_15 = &VAR_13->registrypriv;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 u32 VAR_19;
 u32 VAR_20;
 u8 VAR_21;
 bool VAR_22 = VAR_15->wifi_spec;

 if (VAR_14->OutEpQueueSel & VAR_6)
  VAR_16 = VAR_22 ? VAR_10 : VAR_1;

 if (VAR_14->OutEpQueueSel & VAR_7)
  VAR_17 = VAR_22 ? VAR_11 : VAR_2;


 if (VAR_14->OutEpQueueSel & VAR_8)
  VAR_18 = VAR_22 ? VAR_12 : VAR_3;

 VAR_19 = VAR_9 - VAR_16 - VAR_17 - VAR_18;

 VAR_21 = (u8)FUNC_3(VAR_18);
 FUNC_8(VAR_13, VAR_5, VAR_21);


 VAR_20 = FUNC_1(VAR_16) | FUNC_2(VAR_17) | FUNC_4(VAR_19) | VAR_0;
 FUNC_7(VAR_13, VAR_4, VAR_20);

 FUNC_6(VAR_13, VAR_16, VAR_18, VAR_17, VAR_19);

 FUNC_5(VAR_13, VAR_16, VAR_18, VAR_17, VAR_19);
}
