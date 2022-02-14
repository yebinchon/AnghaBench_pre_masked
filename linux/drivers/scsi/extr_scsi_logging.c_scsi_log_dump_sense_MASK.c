
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,char*) ;
 int FUNC_1 (unsigned char const*,int,int,int,char*,size_t,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t*) ;
 size_t FUNC_5 (char*,size_t,char const*,int) ;

__attribute__((used)) static void
FUNC_6(const struct scsi_device *VAR_1, const char *VAR_2, int VAR_3,
      const unsigned char *VAR_4, int VAR_5)
{
 char *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(&VAR_7);
 if (!VAR_6)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += 16) {
  int VAR_9 = FUNC_2(VAR_5 - VAR_8, 16);
  size_t VAR_10;

  VAR_10 = FUNC_5(VAR_6, VAR_7,
      VAR_2, VAR_3);
  FUNC_1(&VAR_4[VAR_8], VAR_9, 16, 1,
       VAR_6 + VAR_10, VAR_7 - VAR_10,
       0);
  FUNC_0(VAR_0, &VAR_1->sdev_gendev, "%s", VAR_6);
 }
 FUNC_3(VAR_6);
}
