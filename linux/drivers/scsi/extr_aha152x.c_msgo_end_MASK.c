
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct Scsi_Host *VAR_6)
{
 if(VAR_4<VAR_3) {
  FUNC_0(VAR_1, VAR_0,
       "message sent incompletely (%d/%d)\n",
       VAR_4, VAR_3);
  if(VAR_5==1) {
   FUNC_0(VAR_2, VAR_0,
        "Synchronous Data Transfer Request was rejected\n");
   VAR_5=2;
  }
 }

 VAR_4 = 0;
 VAR_3 = 0;
}
