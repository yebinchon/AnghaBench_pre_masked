
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ofdpa_port {int dev; } ;
typedef enum rocker_of_dpa_table_id { ____Placeholder_rocker_of_dpa_table_id } rocker_of_dpa_table_id ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ofdpa_port*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct ofdpa_port *VAR_1, int VAR_2)
{
 enum rocker_of_dpa_table_id VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6;





 VAR_4 = 0;
 VAR_5 = 0xffff0000;
 VAR_3 = VAR_0;

 VAR_6 = FUNC_1(VAR_1, VAR_2,
         VAR_4, VAR_5,
         VAR_3);
 if (VAR_6)
  FUNC_0(VAR_1->dev, "Error (%d) ingress port table entry\n", VAR_6);

 return VAR_6;
}
