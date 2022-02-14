
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rspi_data {int sppcr; int max_speed_hz; int spcmd; scalar_t__ byte_access; int clk; } ;


 int FUNC_0 (int ,int) ;
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
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rspi_data*,int ,int ) ;
 int FUNC_5 (struct rspi_data*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct rspi_data *VAR_11, int VAR_12)
{
 int VAR_13;


 FUNC_5(VAR_11, VAR_11->sppcr, VAR_7);


 VAR_13 = FUNC_0(FUNC_3(VAR_11->clk),
       2 * VAR_11->max_speed_hz) - 1;
 FUNC_5(VAR_11, FUNC_2(VAR_13, 0, 255), VAR_0);


 FUNC_5(VAR_11, 0, VAR_5);
 VAR_11->byte_access = 0;


 FUNC_5(VAR_11, 0x00, VAR_1);
 FUNC_5(VAR_11, 0x00, VAR_9);
 FUNC_5(VAR_11, 0x00, VAR_6);


 FUNC_5(VAR_11, 0x00, VAR_4);


 FUNC_5(VAR_11, 0, VAR_8);
 VAR_11->spcmd |= FUNC_1(VAR_12);
 FUNC_4(VAR_11, VAR_11->spcmd, VAR_2);


 FUNC_5(VAR_11, VAR_10, VAR_3);

 return 0;
}
