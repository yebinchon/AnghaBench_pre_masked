
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvaser_pciefd_can {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct kvaser_pciefd_can *VAR_11)
{
 u32 VAR_12;

 VAR_12 = VAR_8 | VAR_4 |
       VAR_10 | VAR_1 |
       VAR_5 | VAR_6 |
       VAR_3 | VAR_2 |
       VAR_7 | VAR_9;

 FUNC_0(VAR_12, VAR_11->reg_base + VAR_0);

 return 0;
}
