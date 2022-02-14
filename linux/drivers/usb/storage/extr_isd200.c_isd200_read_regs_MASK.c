
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {scalar_t__ extra; } ;
struct isd200_info {int * ATARegs; int RegsBuf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct us_data*,int ,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_3( struct us_data *VAR_5 )
{
 struct isd200_info *VAR_6 = (struct isd200_info *)VAR_5->extra;
 int VAR_7 = VAR_3;
 int VAR_8;

 FUNC_2(VAR_5, "Entering isd200_IssueATAReadRegs\n");

 VAR_8 = FUNC_0( VAR_5, VAR_0,
        VAR_6->RegsBuf, sizeof(VAR_6->ATARegs) );
 if (VAR_8 != VAR_4) {
  FUNC_2(VAR_5, "   Error reading ATA registers\n");
  VAR_7 = VAR_2;
 } else {
  FUNC_1(VAR_6->ATARegs, VAR_6->RegsBuf, sizeof(VAR_6->ATARegs));
  FUNC_2(VAR_5, "   Got ATA Register[ATA_REG_ERROR_OFFSET] = 0x%x\n",
        VAR_6->ATARegs[VAR_1]);
 }

 return VAR_7;
}
