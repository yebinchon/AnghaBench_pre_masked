
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int no_fcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static u32 FUNC_1(struct sk_buff *VAR_9, u32 VAR_10)
{

 u32 VAR_11 = VAR_4 |
         VAR_0 |
         VAR_1;


 VAR_11 |= FUNC_0(VAR_10, VAR_6,
       VAR_3);


 VAR_11 |= FUNC_0(VAR_10, VAR_7,
       VAR_2);


 VAR_11 |= FUNC_0(VAR_10, VAR_8,
       VAR_5);


 VAR_11 ^= FUNC_0(VAR_9->no_fcs, 1, VAR_1);

 return VAR_11;
}
