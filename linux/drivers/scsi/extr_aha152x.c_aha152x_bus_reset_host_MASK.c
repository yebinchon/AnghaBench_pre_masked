
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {scalar_t__ commands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* FUNC_2 (struct Scsi_Host*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct Scsi_Host*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_7(struct Scsi_Host *VAR_7)
{
 unsigned long VAR_8;

 FUNC_0(VAR_8);

 FUNC_4(VAR_7, &VAR_2);
 FUNC_4(VAR_7, &VAR_1);

 FUNC_3(VAR_5, VAR_4);
 FUNC_5(256);
 FUNC_3(VAR_5, 0);
 FUNC_5(VAR_0);

 FUNC_6(VAR_7);
 if(FUNC_2(VAR_7)->commands==0)
  FUNC_3(VAR_3, 0);

 FUNC_1(VAR_8);

 return VAR_6;
}
