
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsc73xx {int* addr; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct vsc73xx*,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vsc73xx *VAR_21, int VAR_22)
{
 u32 VAR_23;


 FUNC_0(VAR_21, VAR_1,
        VAR_22,
        VAR_10,
        VAR_13);





 if (VAR_22 == VAR_0)
  VAR_23 = VAR_12;
 else
  VAR_23 = VAR_11;

 FUNC_0(VAR_21, VAR_1,
        VAR_22,
        VAR_10,
        VAR_23 |
        VAR_15 |
        VAR_14);







 FUNC_0(VAR_21, VAR_1,
        VAR_22,
        VAR_16, 9600);





 FUNC_0(VAR_21, VAR_1,
        VAR_22,
        VAR_5,
        VAR_7 |
        VAR_6);






 if (VAR_22 == VAR_0)
  VAR_23 = VAR_18;
 else
  VAR_23 = VAR_20;
 VAR_23 |= VAR_19;
 FUNC_0(VAR_21, VAR_1,
        VAR_22,
        VAR_17,
        VAR_23);


 VAR_23 = (VAR_21->addr[5] << 16) | (VAR_21->addr[4] << 8) | (VAR_21->addr[3]);
 FUNC_0(VAR_21, VAR_1,
        VAR_22,
        VAR_8,
        VAR_23);
 VAR_23 = (VAR_21->addr[2] << 16) | (VAR_21->addr[1] << 8) | (VAR_21->addr[0]);
 FUNC_0(VAR_21, VAR_1,
        VAR_22,
        VAR_9,
        VAR_23);




 FUNC_0(VAR_21, VAR_1,
        VAR_22,
        VAR_2,
        VAR_3);


 FUNC_0(VAR_21, VAR_1,
        VAR_22, VAR_4, 0);
}
