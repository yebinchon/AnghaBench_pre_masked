
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (struct device*,struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_2 (scalar_t__,int,int ,struct device*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ,char*) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_6(struct device *VAR_7, unsigned int VAR_8)
{
 struct Scsi_Host *VAR_9;
 int VAR_10 = VAR_4[VAR_8];

 if (!VAR_3[VAR_8])
  return 0;

 if (!FUNC_5(VAR_3[VAR_8], VAR_1, "fdomain_isa")) {
  FUNC_0(VAR_7, "base 0x%x already in use", VAR_3[VAR_8]);
  return 0;
 }

 if (VAR_10 <= 0)
  VAR_10 = VAR_5[(FUNC_3(VAR_3[VAR_8] + VAR_2) & VAR_0) >> 1];

 VAR_9 = FUNC_2(VAR_3[VAR_8], VAR_10, VAR_6[VAR_8], VAR_7);
 if (!VAR_9) {
  FUNC_0(VAR_7, "controller not found at base 0x%x", VAR_3[VAR_8]);
  FUNC_4(VAR_3[VAR_8], VAR_1);
  return 0;
 }

 FUNC_1(VAR_7, VAR_9);
 return 1;
}
