
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct Scsi_Host {int io_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int,int,int,int ) ;

__attribute__((used)) static int FUNC_10(struct Scsi_Host *VAR_13)
{
 u8 VAR_14[4];
 int VAR_15;


 if (FUNC_6(FUNC_3(VAR_13->io_port)) == 0xff)
  return 0;




 FUNC_4(VAR_13->io_port);

 FUNC_8(VAR_10 | VAR_9 , FUNC_0(VAR_13->io_port));

 FUNC_7(20);


 if (!FUNC_9(FUNC_3(VAR_13->io_port), VAR_11, VAR_6 | VAR_5, VAR_12 | VAR_3 | VAR_8 | VAR_2 | VAR_0, 0))
  return 0;


 if (FUNC_6(FUNC_2(VAR_13->io_port)) & VAR_7)
  return 0;




 FUNC_5(VAR_13->io_port, VAR_1);

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
  if (!FUNC_9(FUNC_3(VAR_13->io_port), VAR_2, VAR_2, 0, 0))
   return 0;
  VAR_14[VAR_15] = FUNC_6(FUNC_1(VAR_13->io_port));
 }


 if (FUNC_6(FUNC_3(VAR_13->io_port)) & VAR_2)
  return 0;


 if (!FUNC_9(FUNC_2(VAR_13->io_port), VAR_4, VAR_4, 0, 0))
  return 0;


 FUNC_8(VAR_9, FUNC_0(VAR_13->io_port));

 return 1;
}
