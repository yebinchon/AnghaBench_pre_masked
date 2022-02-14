
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned int,int ,int ) ;
 unsigned char FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_14, unsigned int VAR_15)
{
 unsigned char VAR_16;
 int VAR_17 = VAR_13;
 int VAR_18 = 0;

 do {
  VAR_16 = FUNC_2(VAR_15, VAR_2);
  VAR_18++;
 } while ((VAR_16 & (VAR_4 | VAR_1)) == 0 &&
   (VAR_18 <= VAR_3));

 FUNC_0(VAR_11,
    "arbit: 0x%x, delay time: %d", VAR_16, VAR_18);

 if (VAR_16 & VAR_4) {

  VAR_14->result = VAR_7 << 16;
  FUNC_1(VAR_15, VAR_8, VAR_10);
 } else if (VAR_16 & VAR_1) {

  VAR_14->result = VAR_5 << 16;
  VAR_17 = VAR_9;
 } else {




  FUNC_0(VAR_11, "arbit timeout");
  VAR_14->result = VAR_6 << 16;
  VAR_17 = VAR_9;
        }




 FUNC_3(VAR_15, VAR_12, VAR_0);

 return VAR_17;
}
