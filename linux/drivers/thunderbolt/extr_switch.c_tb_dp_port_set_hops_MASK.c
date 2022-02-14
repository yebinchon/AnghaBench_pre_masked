
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tb_port {int cap_adap; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct tb_port*,unsigned int*,int ,int ,int ) ;
 int FUNC_2 (struct tb_port*,unsigned int*,int ,int ,int ) ;

int FUNC_3(struct tb_port *VAR_6, unsigned int VAR_7,
   unsigned int VAR_8, unsigned int VAR_9)
{
 u32 VAR_10[2];
 int VAR_11;

 VAR_11 = FUNC_1(VAR_6, VAR_10, VAR_0, VAR_6->cap_adap,
      FUNC_0(VAR_10));
 if (VAR_11)
  return VAR_11;

 VAR_10[0] &= ~VAR_4;
 VAR_10[1] &= ~(VAR_1 | VAR_3);

 VAR_10[0] |= (VAR_7 << VAR_5) & VAR_4;
 VAR_10[1] |= VAR_8 & VAR_3;
 VAR_10[1] |= (VAR_9 << VAR_2) & VAR_1;

 return FUNC_2(VAR_6, VAR_10, VAR_0, VAR_6->cap_adap,
        FUNC_0(VAR_10));
}
