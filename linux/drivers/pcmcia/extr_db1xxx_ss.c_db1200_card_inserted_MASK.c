
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db1x_pcmcia_sock {int nr; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct db1x_pcmcia_sock *VAR_1)
{
 unsigned short VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 return VAR_2 & 1 << (8 + 2 * VAR_1->nr);
}
