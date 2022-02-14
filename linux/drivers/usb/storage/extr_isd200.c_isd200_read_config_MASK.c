
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_ctrl_pipe; scalar_t__ extra; } ;
struct isd200_info {int ConfigData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct us_data*,struct isd200_info*) ;
 int FUNC_1 (struct us_data*,int ,int,int,int,int,void*,int) ;
 int FUNC_2 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_3( struct us_data *VAR_5 )
{
 struct isd200_info *VAR_6 = (struct isd200_info *)VAR_5->extra;
 int VAR_7 = VAR_1;
 int VAR_8;

 FUNC_2(VAR_5, "Entering isd200_read_config\n");




 VAR_8 = FUNC_1(
  VAR_5,
  VAR_5->recv_ctrl_pipe,
  0x02,
  VAR_4 | VAR_3 | VAR_2,
  0x0000,
  0x0002,
  (void *) &VAR_6->ConfigData,
  sizeof(VAR_6->ConfigData));


 if (VAR_8 >= 0) {
  FUNC_2(VAR_5, "   Retrieved the following ISD200 Config Data:\n");



 } else {
  FUNC_2(VAR_5, "   Request to get ISD200 Config Data failed!\n");
  VAR_7 = VAR_0;
 }

 FUNC_2(VAR_5, "Leaving isd200_read_config %08X\n", VAR_7);
 return VAR_7;
}
