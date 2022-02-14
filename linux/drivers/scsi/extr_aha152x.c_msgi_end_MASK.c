
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct Scsi_Host *VAR_9)
{
 if(VAR_3>0)
  FUNC_2(VAR_2, VAR_1,
       "target left before message completed (%d)\n",
       VAR_3);

 if (VAR_4 > 0 && !(FUNC_0(VAR_8) & VAR_0))
  FUNC_1(VAR_6, VAR_5 | VAR_7);
}
