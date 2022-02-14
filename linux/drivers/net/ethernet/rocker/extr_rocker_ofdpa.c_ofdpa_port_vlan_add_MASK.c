
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ofdpa_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ofdpa_port*,int ,int ) ;
 int FUNC_2 (struct ofdpa_port*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ofdpa_port *VAR_1,
          u16 VAR_2, u16 VAR_3)
{
 int VAR_4;



 VAR_4 = FUNC_2(VAR_1, 0, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1, 0, FUNC_0(VAR_2));
 if (VAR_4)
  FUNC_2(VAR_1,
    VAR_0, VAR_2);

 return VAR_4;
}
