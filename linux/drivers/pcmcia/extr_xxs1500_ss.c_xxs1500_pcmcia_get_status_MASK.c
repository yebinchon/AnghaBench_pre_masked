
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_socket *VAR_16,
         unsigned int *VAR_17)
{
 unsigned int VAR_18;
 int VAR_19;

 VAR_18 = 0;


 if (!FUNC_0(VAR_2) && !FUNC_0(VAR_3))
  VAR_18 |= VAR_11;


 VAR_19 = (!!FUNC_0(VAR_7)) | ((!!FUNC_0(VAR_6)) << 1);

 switch (VAR_19) {
 case 0:
 case 1:
 case 2:
  VAR_18 |= VAR_8;
  break;
 case 3:
 default:
  VAR_18 |= VAR_15;
 }


 VAR_18 |= FUNC_0(VAR_4) ? 0 : VAR_12;


 VAR_18 |= FUNC_0(VAR_5) ? VAR_14 : VAR_13;


 VAR_18 |= FUNC_0(VAR_0) ? 0 : VAR_9;
 VAR_18 |= FUNC_0(VAR_1) ? 0 : VAR_10;

 *VAR_17 = VAR_18;

 return 0;
}
