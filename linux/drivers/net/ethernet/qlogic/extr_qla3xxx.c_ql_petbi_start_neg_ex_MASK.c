
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ql3_adapter {size_t mac_index; } ;


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
 int * VAR_10 ;
 int FUNC_0 (struct ql3_adapter*,int ,int*,int ) ;
 int FUNC_1 (struct ql3_adapter*,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ql3_adapter *VAR_11)
{
 u16 VAR_12;


 FUNC_0(VAR_11, VAR_9, &VAR_12,
      VAR_10[VAR_11->mac_index]);
 VAR_12 |= VAR_8;
 FUNC_1(VAR_11, VAR_9, VAR_12,
       VAR_10[VAR_11->mac_index]);

 FUNC_1(VAR_11, VAR_5,
       VAR_7 | VAR_6,
       VAR_10[VAR_11->mac_index]);

 FUNC_1(VAR_11, VAR_0,
       VAR_1 | VAR_3 |
       VAR_2 | VAR_4,
       VAR_10[VAR_11->mac_index]);
}
