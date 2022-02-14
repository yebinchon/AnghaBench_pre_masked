
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdomain {scalar_t__ base; } ;
struct Scsi_Host {int this_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct fdomain*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;
 struct fdomain* FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_6(struct Scsi_Host *VAR_8, int VAR_9)
{
 int VAR_10;
 unsigned long VAR_11;
 struct fdomain *VAR_12 = FUNC_5(VAR_8);

 FUNC_4(VAR_0 | VAR_1, VAR_12->base + VAR_5);
 FUNC_4(FUNC_0(VAR_8->this_id) | FUNC_0(VAR_9), VAR_12->base + VAR_7);


 FUNC_4(VAR_3, VAR_12->base + VAR_4);

 VAR_11 = 350;

 do {
  VAR_10 = FUNC_2(VAR_12->base + VAR_6);
  if (VAR_10 & VAR_2) {


   FUNC_4(VAR_0, VAR_12->base + VAR_5);
   return 0;
  }
  FUNC_3(1);
 } while (--VAR_11);
 FUNC_1(VAR_12);
 return 1;
}
