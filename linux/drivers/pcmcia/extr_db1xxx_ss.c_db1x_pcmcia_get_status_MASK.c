
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int dummy; } ;
struct db1x_pcmcia_sock {scalar_t__ board_type; int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned short,int ) ;
 scalar_t__ FUNC_1 (unsigned short,int ) ;
 int FUNC_2 (unsigned short,int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned short FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct db1x_pcmcia_sock*) ;
 struct db1x_pcmcia_sock* FUNC_5 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_socket *VAR_10,
      unsigned int *VAR_11)
{
 struct db1x_pcmcia_sock *VAR_12 = FUNC_5(VAR_10);
 unsigned short VAR_13, VAR_14;
 unsigned int VAR_15;

 VAR_15 = FUNC_4(VAR_12) ? VAR_5 : 0;

 VAR_13 = FUNC_3(VAR_0);
 VAR_14 = FUNC_3(VAR_1);


 if (VAR_12->board_type == VAR_3)
  VAR_14 >>= 4;


 switch (FUNC_2(VAR_14, VAR_12->nr)) {
 case 0:
 case 2:
  VAR_15 |= VAR_4;
 case 3:
  break;
 default:
  VAR_15 |= VAR_9;
 }


 VAR_15 |= FUNC_1(VAR_13, VAR_12->nr) ? VAR_6 : 0;


 if ((VAR_12->board_type == VAR_2) && (VAR_15 & VAR_5))
  VAR_15 = VAR_6 | VAR_4 | VAR_5;


 VAR_15 |= (FUNC_0(VAR_13, VAR_12->nr)) ? VAR_7 : VAR_8;

 *VAR_11 = VAR_15;

 return 0;
}
