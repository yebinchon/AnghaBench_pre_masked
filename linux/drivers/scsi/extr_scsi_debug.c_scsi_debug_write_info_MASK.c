
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,char*,int*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_10, char *VAR_11,
     int VAR_12)
{
 char VAR_13[16];
 int VAR_14;
 int VAR_15 = VAR_12 > 15 ? 15 : VAR_12;

 if (!FUNC_0(VAR_0) || !FUNC_0(VAR_1))
  return -VAR_2;
 FUNC_1(VAR_13, VAR_11, VAR_15);
 VAR_13[VAR_15] = '\0';
 if (1 != FUNC_2(VAR_13, "%d", &VAR_14))
  return -VAR_3;
 VAR_8 = VAR_14;
 VAR_9 = !!(VAR_5 & VAR_14);
 VAR_6 = !!(VAR_4 & VAR_14);
 if (VAR_7 != 0)
  FUNC_3();
 return VAR_12;
}
