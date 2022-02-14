
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tape {int door_locked; int device; } ;


 int FUNC_0 (struct scsi_tape*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_tape * VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_5, "%socking drive door.\n", VAR_6 ? "L" : "Unl");

 VAR_7 = FUNC_1(VAR_5->device,
   VAR_6 ? VAR_1 : VAR_0);
 if (!VAR_7)
  VAR_5->door_locked = VAR_6 ? VAR_2 : VAR_4;
 else
  VAR_5->door_locked = VAR_3;
 return VAR_7;
}
