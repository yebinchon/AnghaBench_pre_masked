
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_port {int cap_adap; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tb_port*,int*,int ,int ,int ) ;
 int FUNC_2 (struct tb_port*,int*,int ,int ,int ) ;

int FUNC_3(struct tb_port *VAR_3, bool VAR_4)
{
 u32 VAR_5[2];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_0, VAR_3->cap_adap,
      FUNC_0(VAR_5));
 if (VAR_6)
  return VAR_6;

 if (VAR_4)
  VAR_5[0] |= VAR_2 | VAR_1;
 else
  VAR_5[0] &= ~(VAR_2 | VAR_1);

 return FUNC_2(VAR_3, VAR_5, VAR_0, VAR_3->cap_adap,
        FUNC_0(VAR_5));
}
