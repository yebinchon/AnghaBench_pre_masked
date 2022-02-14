
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef char u32 ;
struct sifive_serial_port {int dummy; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 char FUNC_1 (struct sifive_serial_port*,int ) ;

__attribute__((used)) static char FUNC_2(struct sifive_serial_port *VAR_5, char *VAR_6)
{
 u32 VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_1(VAR_5, VAR_4);

 if (!VAR_6)
  FUNC_0(1);
 else
  *VAR_6 = (VAR_7 & VAR_2) >>
   VAR_3;

 VAR_8 = (VAR_7 & VAR_0) >>
  VAR_1;

 return VAR_8;
}
