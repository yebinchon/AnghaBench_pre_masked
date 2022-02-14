
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rspi_data {int sppcr; int max_speed_hz; int byte_access; int spcmd; int clk; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rspi_data*,int,int ) ;
 int FUNC_4 (struct rspi_data*,int ,int ) ;
 int FUNC_5 (struct rspi_data*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct rspi_data *VAR_20, int VAR_21)
{
 int VAR_22;


 FUNC_5(VAR_20, VAR_20->sppcr, VAR_8);


 VAR_22 = FUNC_0(FUNC_2(VAR_20->clk), 2 * VAR_20->max_speed_hz);
 FUNC_5(VAR_20, FUNC_1(VAR_22, 0, 255), VAR_2);


 FUNC_5(VAR_20, 0, VAR_6);
 VAR_20->byte_access = 1;


 FUNC_5(VAR_20, 0x00, VAR_3);
 FUNC_5(VAR_20, 0x00, VAR_10);
 FUNC_5(VAR_20, 0x00, VAR_7);


 if (VAR_21 == 8)
  VAR_20->spcmd |= VAR_17;
 else if (VAR_21 == 16)
  VAR_20->spcmd |= VAR_15;
 else
  VAR_20->spcmd |= VAR_16;

 VAR_20->spcmd |= VAR_13 | VAR_14 | VAR_18;


 FUNC_4(VAR_20, 0, VAR_1);


 FUNC_5(VAR_20, VAR_12 | VAR_11, VAR_0);

 FUNC_5(VAR_20, 0x00, VAR_0);


 FUNC_5(VAR_20, 0, VAR_9);
 FUNC_3(VAR_20, VAR_20->spcmd, VAR_4);


 FUNC_5(VAR_20, VAR_19, VAR_5);

 return 0;
}
