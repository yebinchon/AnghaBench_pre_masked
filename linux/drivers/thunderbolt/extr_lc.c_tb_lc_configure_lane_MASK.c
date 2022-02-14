
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_switch {int generation; } ;
struct tb_port {int port; struct tb_switch* sw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tb_port*) ;
 int FUNC_1 (struct tb_port*) ;
 int FUNC_2 (struct tb_switch*,int *,int ,scalar_t__,int) ;
 int FUNC_3 (struct tb_switch*,int *,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct tb_port *VAR_5, bool VAR_6)
{
 bool VAR_7 = FUNC_1(VAR_5);
 struct tb_switch *VAR_8 = VAR_5->sw;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12;

 if (VAR_8->generation < 2)
  return 0;

 VAR_11 = FUNC_0(VAR_5);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = FUNC_2(VAR_8, &VAR_9, VAR_0, VAR_11 + VAR_1, 1);
 if (VAR_12)
  return VAR_12;


 if (VAR_5->port % 2)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_3;

 if (VAR_6) {
  VAR_9 |= VAR_10;
  if (VAR_7)
   VAR_9 |= VAR_4;
 } else {
  VAR_9 &= ~VAR_10;
  if (VAR_7)
   VAR_9 &= ~VAR_4;
 }

 return FUNC_3(VAR_8, &VAR_9, VAR_0, VAR_11 + VAR_1, 1);
}
