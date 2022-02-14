
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moxa_port {int tableAddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct moxa_port *VAR_6, int VAR_7, int VAR_8,
  int VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12 = 0;

 if (VAR_7)
  VAR_12 |= VAR_3;
 if (VAR_8)
  VAR_12 |= VAR_0;
 if (VAR_9)
  VAR_12 |= VAR_5;
 if (VAR_10)
  VAR_12 |= VAR_4;
 if (VAR_11)
  VAR_12 |= VAR_2;
 FUNC_0(VAR_6->tableAddr, VAR_1, VAR_12);
}
