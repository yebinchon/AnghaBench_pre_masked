
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rza1_port {int id; } ;
struct rza1_pinctrl {struct rza1_port* ports; } ;
struct rza1_mux_conf {size_t port; unsigned int pin; int mux_func; int mux_flags; } ;


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
 int FUNC_0 (struct rza1_port*,unsigned int) ;
 int FUNC_1 (int ,unsigned int,int,struct rza1_pinctrl*) ;
 int FUNC_2 (struct rza1_port*,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct rza1_pinctrl *VAR_13,
          struct rza1_mux_conf *VAR_14)
{
 struct rza1_port *VAR_15 = &VAR_13->ports[VAR_14->port];
 unsigned int VAR_16 = VAR_14->pin;
 u8 VAR_17 = VAR_14->mux_func;
 u8 VAR_18 = VAR_14->mux_flags;
 u8 VAR_19;

 FUNC_0(VAR_15, VAR_16);


 VAR_19 = FUNC_1(VAR_15->id, VAR_16, VAR_17,
           VAR_13);
 if (VAR_18)
  VAR_18 |= (VAR_19 & VAR_0);
 else
  VAR_18 = VAR_19;

 if (VAR_18 & VAR_0)
  FUNC_2(VAR_15, VAR_6, VAR_16, 1);
 VAR_17 -= 1;
 FUNC_2(VAR_15, VAR_9, VAR_16, VAR_17 & VAR_5);
 FUNC_2(VAR_15, VAR_8, VAR_16, VAR_17 & VAR_4);
 FUNC_2(VAR_15, VAR_7, VAR_16, VAR_17 & VAR_3);







 if (VAR_18 & (VAR_1 | VAR_2))
  FUNC_2(VAR_15, VAR_12, VAR_16,
        VAR_18 & VAR_1);
 else
  FUNC_2(VAR_15, VAR_10, VAR_16, 1);

 FUNC_2(VAR_15, VAR_11, VAR_16, 1);

 return 0;
}
